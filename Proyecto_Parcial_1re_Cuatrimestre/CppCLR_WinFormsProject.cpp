#include "pch.h"
#include "Form1.h"
#include "FormRegister.h"

using namespace System;
using namespace System::Windows::Forms;


ref class Controller {
private:
	CppCLRWinFormsProject::Form1^ form1;
	CppCLRWinFormsProject::FormRegister^ formRegister;

public:
	Controller() {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		this->form1 = gcnew CppCLRWinFormsProject::Form1();
		this->form1->registerButton->Click += gcnew System::EventHandler(this, &Controller::openFormRegister);

		Application::Run(form1);
	}

	Void openFormRegister(System::Object^ sender, System::EventArgs^ e) {
		this->formRegister = gcnew CppCLRWinFormsProject::FormRegister();
		this->formRegister->Show();
		this->form1->Hide();
	}

};


[STAThread]
int main()
{
	Controller^ controlador = gcnew Controller();
	return 0;
}