#pragma once
#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>
#include <string>
#include "Lista.h"
#include "Prestamo.h"
#include "ObjetoBase.h"
using std::string; using std::stringstream; using std::cout; using std::endl; using std::cin;

class Usuario : objetoBase {
public:
	Usuario(string Nombre);
	virtual ~Usuario();
	virtual void setEstado(bool Estado);
	virtual string getNombre();
	virtual string getId();
	virtual bool getEstado();
	virtual void prestamo(Prestamo*);
	virtual void mostrarPrestamos();
	virtual string devolver(string id); // retorna id del libro que esta devolviendo
	virtual int cantidadPrestamos();
	virtual string toString();
	virtual bool checkPrestamo(string); // false si el prestamo no esta en su lista, true si lo esta

	//Atributos
	Lista<Prestamo> prestamos;//Lista de prestamos 
private:
	string nombre;
	string id;
	bool estado;
	static int cont;
};

#endif