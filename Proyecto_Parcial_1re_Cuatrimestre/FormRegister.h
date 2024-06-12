#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormRegistro
	/// </summary>
	public ref class FormRegister : public System::Windows::Forms::Form
	{
	public:
		FormRegister(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelNombre;
	public: System::Windows::Forms::TextBox^ inputNombre;


	private: System::Windows::Forms::Label^ labelApellido;
	public: System::Windows::Forms::TextBox^ inputApellido;


	private: System::Windows::Forms::Label^ labelSector;
	public: System::Windows::Forms::TextBox^ inputSector;


	private: System::Windows::Forms::Label^ labelDNI;
	public: System::Windows::Forms::TextBox^ inputDNI;


	private: System::Windows::Forms::Label^ labelContraseña;
	public: System::Windows::Forms::TextBox^ inputContraseña;


	private: System::Windows::Forms::Label^ labelDireccion;
	public: System::Windows::Forms::TextBox^ inputDireccion;


	private: System::Windows::Forms::Label^ labelLegajo;
	public: System::Windows::Forms::TextBox^ inputLegajo;
	public: System::Windows::Forms::Button^ buttonVolver;
	public: System::Windows::Forms::Button^ buttonRegistrarse;








	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->inputNombre = (gcnew System::Windows::Forms::TextBox());
			this->labelApellido = (gcnew System::Windows::Forms::Label());
			this->inputApellido = (gcnew System::Windows::Forms::TextBox());
			this->labelSector = (gcnew System::Windows::Forms::Label());
			this->inputSector = (gcnew System::Windows::Forms::TextBox());
			this->labelDNI = (gcnew System::Windows::Forms::Label());
			this->inputDNI = (gcnew System::Windows::Forms::TextBox());
			this->labelContraseña = (gcnew System::Windows::Forms::Label());
			this->inputContraseña = (gcnew System::Windows::Forms::TextBox());
			this->labelDireccion = (gcnew System::Windows::Forms::Label());
			this->inputDireccion = (gcnew System::Windows::Forms::TextBox());
			this->labelLegajo = (gcnew System::Windows::Forms::Label());
			this->inputLegajo = (gcnew System::Windows::Forms::TextBox());
			this->buttonVolver = (gcnew System::Windows::Forms::Button());
			this->buttonRegistrarse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(46, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Registro de usuario";
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombre->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNombre->Location = System::Drawing::Point(9, 60);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(64, 17);
			this->labelNombre->TabIndex = 11;
			this->labelNombre->Text = L"Nombre";
			// 
			// inputNombre
			// 
			this->inputNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputNombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputNombre->ForeColor = System::Drawing::SystemColors::Window;
			this->inputNombre->Location = System::Drawing::Point(12, 80);
			this->inputNombre->Name = L"inputNombre";
			this->inputNombre->Size = System::Drawing::Size(265, 26);
			this->inputNombre->TabIndex = 3;
			// 
			// labelApellido
			// 
			this->labelApellido->AutoSize = true;
			this->labelApellido->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelApellido->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelApellido->Location = System::Drawing::Point(8, 116);
			this->labelApellido->Name = L"labelApellido";
			this->labelApellido->Size = System::Drawing::Size(65, 17);
			this->labelApellido->TabIndex = 13;
			this->labelApellido->Text = L"Apellido";
			// 
			// inputApellido
			// 
			this->inputApellido->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputApellido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputApellido->ForeColor = System::Drawing::SystemColors::Window;
			this->inputApellido->Location = System::Drawing::Point(11, 136);
			this->inputApellido->Name = L"inputApellido";
			this->inputApellido->Size = System::Drawing::Size(265, 26);
			this->inputApellido->TabIndex = 4;
			// 
			// labelSector
			// 
			this->labelSector->AutoSize = true;
			this->labelSector->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSector->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelSector->Location = System::Drawing::Point(8, 228);
			this->labelSector->Name = L"labelSector";
			this->labelSector->Size = System::Drawing::Size(54, 17);
			this->labelSector->TabIndex = 17;
			this->labelSector->Text = L"Sector";
			// 
			// inputSector
			// 
			this->inputSector->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputSector->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputSector->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputSector->ForeColor = System::Drawing::SystemColors::Window;
			this->inputSector->Location = System::Drawing::Point(11, 248);
			this->inputSector->Name = L"inputSector";
			this->inputSector->Size = System::Drawing::Size(265, 26);
			this->inputSector->TabIndex = 6;
			// 
			// labelDNI
			// 
			this->labelDNI->AutoSize = true;
			this->labelDNI->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDNI->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelDNI->Location = System::Drawing::Point(9, 172);
			this->labelDNI->Name = L"labelDNI";
			this->labelDNI->Size = System::Drawing::Size(34, 17);
			this->labelDNI->TabIndex = 15;
			this->labelDNI->Text = L"DNI";
			// 
			// inputDNI
			// 
			this->inputDNI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputDNI->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputDNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputDNI->ForeColor = System::Drawing::SystemColors::Window;
			this->inputDNI->Location = System::Drawing::Point(12, 192);
			this->inputDNI->Name = L"inputDNI";
			this->inputDNI->Size = System::Drawing::Size(265, 26);
			this->inputDNI->TabIndex = 5;
			// 
			// labelContraseña
			// 
			this->labelContraseña->AutoSize = true;
			this->labelContraseña->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelContraseña->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelContraseña->Location = System::Drawing::Point(8, 396);
			this->labelContraseña->Name = L"labelContraseña";
			this->labelContraseña->Size = System::Drawing::Size(89, 17);
			this->labelContraseña->TabIndex = 23;
			this->labelContraseña->Text = L"Contraseña";
			// 
			// inputContraseña
			// 
			this->inputContraseña->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputContraseña->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputContraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputContraseña->ForeColor = System::Drawing::SystemColors::Window;
			this->inputContraseña->Location = System::Drawing::Point(11, 416);
			this->inputContraseña->Name = L"inputContraseña";
			this->inputContraseña->Size = System::Drawing::Size(265, 26);
			this->inputContraseña->TabIndex = 9;
			// 
			// labelDireccion
			// 
			this->labelDireccion->AutoSize = true;
			this->labelDireccion->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDireccion->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelDireccion->Location = System::Drawing::Point(9, 340);
			this->labelDireccion->Name = L"labelDireccion";
			this->labelDireccion->Size = System::Drawing::Size(75, 17);
			this->labelDireccion->TabIndex = 21;
			this->labelDireccion->Text = L"Dirección";
			// 
			// inputDireccion
			// 
			this->inputDireccion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputDireccion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputDireccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputDireccion->ForeColor = System::Drawing::SystemColors::Window;
			this->inputDireccion->Location = System::Drawing::Point(12, 360);
			this->inputDireccion->Name = L"inputDireccion";
			this->inputDireccion->Size = System::Drawing::Size(265, 26);
			this->inputDireccion->TabIndex = 8;
			// 
			// labelLegajo
			// 
			this->labelLegajo->AutoSize = true;
			this->labelLegajo->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLegajo->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelLegajo->Location = System::Drawing::Point(8, 284);
			this->labelLegajo->Name = L"labelLegajo";
			this->labelLegajo->Size = System::Drawing::Size(56, 17);
			this->labelLegajo->TabIndex = 19;
			this->labelLegajo->Text = L"Legajo";
			// 
			// inputLegajo
			// 
			this->inputLegajo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->inputLegajo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputLegajo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputLegajo->ForeColor = System::Drawing::SystemColors::Window;
			this->inputLegajo->Location = System::Drawing::Point(11, 304);
			this->inputLegajo->Name = L"inputLegajo";
			this->inputLegajo->Size = System::Drawing::Size(265, 26);
			this->inputLegajo->TabIndex = 7;
			// 
			// buttonVolver
			// 
			this->buttonVolver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->buttonVolver->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonVolver->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->buttonVolver->Location = System::Drawing::Point(11, 460);
			this->buttonVolver->Name = L"buttonVolver";
			this->buttonVolver->Size = System::Drawing::Size(125, 32);
			this->buttonVolver->TabIndex = 24;
			this->buttonVolver->Text = L"Volver";
			this->buttonVolver->UseVisualStyleBackColor = false;
			// 
			// buttonRegistrarse
			// 
			this->buttonRegistrarse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->buttonRegistrarse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonRegistrarse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRegistrarse->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->buttonRegistrarse->Location = System::Drawing::Point(152, 460);
			this->buttonRegistrarse->Name = L"buttonRegistrarse";
			this->buttonRegistrarse->Size = System::Drawing::Size(125, 32);
			this->buttonRegistrarse->TabIndex = 10;
			this->buttonRegistrarse->Text = L"Registrarse";
			this->buttonRegistrarse->UseVisualStyleBackColor = false;
			// 
			// FormRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(284, 504);
			this->Controls->Add(this->buttonRegistrarse);
			this->Controls->Add(this->buttonVolver);
			this->Controls->Add(this->labelContraseña);
			this->Controls->Add(this->inputContraseña);
			this->Controls->Add(this->labelDireccion);
			this->Controls->Add(this->inputDireccion);
			this->Controls->Add(this->labelLegajo);
			this->Controls->Add(this->inputLegajo);
			this->Controls->Add(this->labelSector);
			this->Controls->Add(this->inputSector);
			this->Controls->Add(this->labelDNI);
			this->Controls->Add(this->inputDNI);
			this->Controls->Add(this->labelApellido);
			this->Controls->Add(this->inputApellido);
			this->Controls->Add(this->labelNombre);
			this->Controls->Add(this->inputNombre);
			this->Controls->Add(this->label3);
			this->Name = L"FormRegister";
			this->Text = L"FormRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
