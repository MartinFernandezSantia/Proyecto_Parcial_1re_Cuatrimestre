#pragma once
#include "FormRegister.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ registerButton;
	protected:

	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::TextBox^ dniInput;

	private: System::Windows::Forms::Label^ dniLabel;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwordInput;


	private: System::Windows::Forms::LinkLabel^ forgotPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->dniInput = (gcnew System::Windows::Forms::TextBox());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->forgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// registerButton
			// 
			this->registerButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->registerButton->Location = System::Drawing::Point(12, 215);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(125, 32);
			this->registerButton->TabIndex = 0;
			this->registerButton->Text = L"Registrarse";
			this->registerButton->UseVisualStyleBackColor = false;
			//this->registerButton->Click += gcnew System::EventHandler(this, &Form1::registerButton_Click);
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->loginButton->Location = System::Drawing::Point(152, 215);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(125, 32);
			this->loginButton->TabIndex = 1;
			this->loginButton->Text = L"Iniciar sesión";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &Form1::loginButton_Click_1);
			// 
			// dniInput
			// 
			this->dniInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->dniInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dniInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniInput->ForeColor = System::Drawing::SystemColors::Window;
			this->dniInput->Location = System::Drawing::Point(12, 77);
			this->dniInput->Name = L"dniInput";
			this->dniInput->Size = System::Drawing::Size(265, 26);
			this->dniInput->TabIndex = 2;
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(8, 54);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(34, 17);
			this->dniLabel->TabIndex = 3;
			this->dniLabel->Text = L"DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(8, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Contraseña";
			// 
			// passwordInput
			// 
			this->passwordInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordInput->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passwordInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordInput->ForeColor = System::Drawing::SystemColors::Window;
			this->passwordInput->Location = System::Drawing::Point(12, 136);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->PasswordChar = '*';
			this->passwordInput->Size = System::Drawing::Size(265, 26);
			this->passwordInput->TabIndex = 4;
			// 
			// forgotPassword
			// 
			this->forgotPassword->ActiveLinkColor = System::Drawing::Color::MidnightBlue;
			this->forgotPassword->AutoSize = true;
			this->forgotPassword->LinkColor = System::Drawing::Color::RoyalBlue;
			this->forgotPassword->Location = System::Drawing::Point(128, 177);
			this->forgotPassword->Name = L"forgotPassword";
			this->forgotPassword->Size = System::Drawing::Size(149, 13);
			this->forgotPassword->TabIndex = 7;
			this->forgotPassword->TabStop = true;
			this->forgotPassword->Text = L"¿Has olvidado tu contraseña\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Liberation Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(67, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 23);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Inicio de sesión";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Firebrick;
			this->label4->Location = System::Drawing::Point(184, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Usuario incorrecto";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Firebrick;
			this->label5->Location = System::Drawing::Point(166, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Contraseña incorrecta";
			this->label5->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->forgotPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->dniInput);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->registerButton);
			this->Name = L"Form1";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
//	CppCLRWinFormsProject::FormRegister^ formRegistro = gcnew CppCLRWinFormsProject::FormRegister();
//	formRegistro->Show();
//	this->Hide();
//}
private: System::Void loginButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->dniInput->Text;
	String^ password = this->passwordInput->Text;

	MessageBox::Show(username, "Usuario");
}
};
}
