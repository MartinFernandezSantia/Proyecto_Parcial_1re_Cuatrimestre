#include "pch.h"
#include "FormLogin.h"
#include "FormRegister.h"
#include "FormMain.h"
#include "user.h"

using namespace System;
using namespace System::Windows::Forms;

ref class Controller {
private:
	CppCLRWinFormsProject::FormLogin^ formLogin;
	CppCLRWinFormsProject::FormRegister^ formRegister;
	CppCLRWinFormsProject::FormMain^ formMain;
	User^ usuario;

	//Atributos para formMain
	double subtotal = 0;
	double descuento;
	double total = 0;

public:
	Controller() {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		// Instancias
		this->formLogin = gcnew CppCLRWinFormsProject::FormLogin();
		this->formRegister = gcnew CppCLRWinFormsProject::FormRegister();
		this->formMain = gcnew CppCLRWinFormsProject::FormMain();

		// Login
		this->formLogin->registerButton->Click += gcnew System::EventHandler(this, &Controller::openFormRegister_Form1);
		this->formLogin->loginButton->Click += gcnew System::EventHandler(this, &Controller::loginUsuario);

		// Register
		this->formRegister->buttonVolver->Click += gcnew System::EventHandler(this, &Controller::volver_FormRegister);
		this->formRegister->buttonRegistrarse->Click += gcnew System::EventHandler(this, &Controller::registrarUsuario_FormRegister);
		this->formRegister->FormClosing += gcnew FormClosingEventHandler(this, &Controller::terminarAplicacion);

		// MainForm
		this->formMain->FormClosing += gcnew FormClosingEventHandler(this, &Controller::terminarAplicacion);
		// - Stock
		this->formMain->buttonAgregar->Click += gcnew System::EventHandler(this, &Controller::agregarStock);
		this->formMain->buttonEliminar->Click += gcnew System::EventHandler(this, &Controller::eliminarStock);
		// - Facturacion
		this->formMain->buttonAgregarFacturacion->Click += gcnew System::EventHandler(this, &Controller::agregarFacturacion);
		this->formMain->buttonEliminarFacturacion->Click += gcnew System::EventHandler(this, &Controller::eliminarFacturacion);
		this->formMain->buttonAplicarDescuento->Click += gcnew System::EventHandler(this, &Controller::aplicarDescuento);


		//Usuario hardcodeado
		usuario = gcnew User("Martin", "apellido", 1234, "sector", 123, "direccion", "asd");

		Application::Run(formLogin);
	}

	Void openFormRegister_Form1(System::Object^ sender, System::EventArgs^ e) {
		this->formRegister->Show();
		this->formLogin->Hide();
	}

	Void volver_FormRegister(System::Object^ sender, System::EventArgs^ e) {
		this->formRegister->Hide();
		this->formLogin->Show();
	}

	Void registrarUsuario_FormRegister(System::Object^ sender, System::EventArgs^ e) {
		// Valores de las TextBoxes del FormRegister
		try {
			String^ nombre = this->formRegister->inputNombre->Text;
			String^ apellido = this->formRegister->inputApellido->Text;
			int dni = Convert::ToInt32(this->formRegister->inputDNI->Text);
			String^ sector = this->formRegister->inputSector->Text;
			int legajo = Convert::ToInt32(this->formRegister->inputLegajo->Text);
			String^ direccion = this->formRegister->inputDireccion->Text;
			String^ contraseña = this->formRegister->inputContraseña->Text;

			// Creo el usuario
			usuario = gcnew User(nombre, apellido, dni, sector, legajo, direccion, contraseña);

			// Vuelvo a la pestaña de login
			this->volver_FormRegister(nullptr, nullptr);

		}
		catch (System::FormatException^) {
			this->mensajeFormatoIncorrecto("Registro");
		}
	}

	Void loginUsuario(System::Object^ sender, System::EventArgs^ e) {
		this->formLogin->labelDniIncorrecto->Hide();
		this->formLogin->labelContraseñaIncorrecta->Hide();

		if (this->usuario) {
			try {
				int dni = Convert::ToInt32(this->formLogin->dniInput->Text);
				String^ contraseña = this->formLogin->passwordInput->Text;

				if (dni == this->usuario->getDNI()) {
					if (contraseña == this->usuario->getContraseña()) {
						this->formMain->Show();
						this->formLogin->Hide();
					}
					else this->formLogin->labelContraseñaIncorrecta->Show();
				}
				else this->formLogin->labelDniIncorrecto->Show();
			}
			catch (System::FormatException^) {}
		}
		else
		{
			MessageBox::Show("Debe crear un usuario primero", "Login");
		}
	}

	Void agregarStock(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->formMain->dataGridStock->Rows->Add(
				Convert::ToInt32(this->formMain->inputIdProducto->Text),
				this->formMain->inputNombre->Text,
				Convert::ToDouble(this->formMain->inputPrecio->Text),
				Convert::ToInt32(this->formMain->inputCantidad->Text)
			);
		}
		catch (System::FormatException^) {
			this->mensajeFormatoIncorrecto("Stock");
		}
		
	}

	Void eliminarStock(System::Object^ sender, System::EventArgs^ e) {
		if (this->formMain->dataGridStock->SelectedRows->Count > 0)
		{
			int indiceSeleccionado = this->formMain->dataGridStock->SelectedRows[0]->Index;
			this->formMain->dataGridStock->Rows->RemoveAt(indiceSeleccionado);
		}
	}

	Void agregarFacturacion(System::Object^ sender, System::EventArgs^ e) {
		try {
			double precio = Convert::ToDouble(this->formMain->inputPrecioFacturacion->Text);
			int cantidad = Convert::ToInt32(this->formMain->inputCantidadFacturacion->Text);

			if (precio >= 0 && cantidad >= 0) {
				this->subtotal += (precio * cantidad);
				this->total += (precio * cantidad);
				this->actualizarTotalySubtotal();
			}
			else this->mensajeFormatoIncorrecto("Facturacion");
		}
		catch (System::FormatException^) {
			this->mensajeFormatoIncorrecto("Facturacion");
			return;
		}

		this->formMain->dataGridFacturacion->Rows->Add(
			this->formMain->inputProducto->Text,
			this->formMain->inputPrecioFacturacion->Text,
			this->formMain->inputCantidadFacturacion->Text
		);
	}

	Void eliminarFacturacion(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewSelectedRowCollection^ filas_seleccionadas = this->formMain->dataGridFacturacion->SelectedRows;
		if (filas_seleccionadas->Count > 0)
		{
			int indiceSeleccionado = filas_seleccionadas[0]->Index;
			
			int cantidad = Convert::ToInt32(filas_seleccionadas[0]->Cells[2]->Value);
			double precio = Convert::ToInt32(filas_seleccionadas[0]->Cells[1]->Value);

			this->subtotal -= cantidad * precio;
			this->total -= cantidad * precio;

			if (this->total < 0) {
				this->total = 0;
			}

			this->actualizarTotalySubtotal();

			this->formMain->dataGridFacturacion->Rows->RemoveAt(indiceSeleccionado);
		}
	}

	Void aplicarDescuento(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->descuento = Convert::ToDouble(this->formMain->inputDescuento->Text);

			if (this->descuento >= 0) {
				this->total = this->subtotal / 100 * (100 - descuento);
				this->actualizarTotalySubtotal();
			}
			return;

		}
		catch (System::FormatException^){}

		this->mensajeFormatoIncorrecto("Facturacion");
	}

	Void actualizarTotalySubtotal() {
		this->formMain->inputSubtotal->Text = "$ " + Convert::ToString(this->subtotal);
		this->formMain->inputTotal->Text = "$ " + Convert::ToString(this->total);
	}

	Void terminarAplicacion(Object^ sender, FormClosingEventArgs^ e) {
		Application::Exit();
	}

	Void mensajeFormatoIncorrecto(String^ ventana) {
		MessageBox::Show("Los datos ingresados no son del tipo correcto", ventana);
	}

};


[STAThread]
int main()
{
	Controller^ controlador = gcnew Controller();
	return 0;
}