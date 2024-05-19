#pragma once
// En el archivo Controlador.h
#pragma once
#include "Form1.h" // Incluye el formulario

namespace CppCLRWinFormsProject {

    public ref class Controlador {
    private:
        Form1^ formulario; // Referencia al formulario

    public:
        Controlador() {
            this->formulario = gcnew Form1(); // Pasa una referencia del controlador al formulario
        }

        Form1^ getForm() {
            return this->formulario;
        }
    };
}
