#pragma once
#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>
#include "Lista.h"
#include "Prestamo.h"
using std::string; using std::stringstream; using std::cout; using std::endl; using std::cin;

class Usuario {
public:
	Usuario(string Nombre, bool Estado);
	virtual ~Usuario();
	void setNombre(string Nombre);
	void setId(string ID);
	void setEstado(bool Estado);
	string getNombre();
	string getId();
	bool getEstado();
	void prestamo(Prestamo*);
	void mostrarPrestamos();
	string devolver(string id); // retorna id del libro que esta devolviendo
	int cantidadPrestamos();
	string toString();
	bool checkPrestamo(string); // false si el prestamo no esta en su lista, true si lo esta

	//Atributos
	Lista<Prestamo> prestamos;//Lista de prestamos 
private:
	string nombre;
	string id;
	bool estado;
	static int cont;
};

#endif