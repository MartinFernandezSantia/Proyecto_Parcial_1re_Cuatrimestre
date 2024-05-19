#pragma once
#include "auth.h"

using namespace System;

public ref class User {
private:
	String^ nombre;
	String^ apellido;
	int dni;
	String^ sector;
	int legajo;
	String^ direccion;
	String^ contrase�a;

public:
	User(String^ nombre, String^ apellido, int dni, String^ sector, int legajo, String^ direccion) {
		this->nombre = nombre;
		this->apellido = apellido;
		this->dni = dni;
		this->sector = sector;
		this->legajo = legajo;
		this->direccion = direccion;
		this->contrase�a = Auth::hashContrase�a(contrase�a);
	}
};