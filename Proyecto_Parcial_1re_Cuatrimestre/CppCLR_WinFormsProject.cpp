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
public:
	Controller() {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		this->formLogin = gcnew CppCLRWinFormsProject::FormLogin();
		this->formRegister = gcnew CppCLRWinFormsProject::FormRegister();
		this->formMain = gcnew CppCLRWinFormsProject::FormMain();

		// Login Buttons
		this->formLogin->registerButton->Click += gcnew System::EventHandler(this, &Controller::openFormRegister_Form1);
		this->formLogin->loginButton->Click += gcnew System::EventHandler(this, &Controller::loginUsuario_Form1);

		// Register Buttons
		this->formRegister->buttonVolver->Click += gcnew System::EventHandler(this, &Controller::volver_FormRegister);
		this->formRegister->buttonRegistrarse->Click += gcnew System::EventHandler(this, &Controller::registrarUsuario_FormRegister);

		// MainForm Butttons
		this->formMain->buttonAgregar->Click += gcnew System::EventHandler(this, &Controller::addRowDatagridStock);
		this->formMain->buttonEliminar->Click += gcnew System::EventHandler(this, &Controller::deleteRowDatagridStock);



		//Usuario hardcodeado
		usuario = gcnew User("Martin", "apellido", 1234, "sector", 123, "direccion", "hola");

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

	Void loginUsuario_Form1(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToInt32(this->formLogin->dniInput->Text) == this->usuario->getDNI() && this->formLogin->passwordInput->Text == this->usuario->getContraseña()) {
			this->formMain->Show();
			this->formLogin->Hide();
		}
		else
		{
			MessageBox::Show("Wa wa waaa");
		}
	}

	Void addRowDatagridStock(System::Object^ sender, System::EventArgs^ e) {
		this->formMain->dataGridStock->Rows->Add(
			Convert::ToInt32(this->formMain->inputIdProducto->Text),
			this->formMain->inputNombre->Text,
			Convert::ToDouble(this->formMain->inputPrecio->Text),
			Convert::ToInt32(this->formMain->inputCantidad->Text)
		);
	}

	Void deleteRowDatagridStock(System::Object^ sender, System::EventArgs^ e) {
		if (this->formMain->dataGridStock->SelectedRows->Count > 0)
		{
			int indiceSeleccionado = this->formMain->dataGridStock->SelectedRows[0]->Index;
			this->formMain->dataGridStock->Rows->RemoveAt(indiceSeleccionado);
		}
	}
};


[STAThread]
int main()
{
	Controller^ controlador = gcnew Controller();
	return 0;
}