#pragma once
#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Lista.h"
#include "Prestamo.h"
#include "ObjetoBase.h"
using std::string; using std::stringstream; using std::cout; using std::endl; using std::cin; using std::ifstream;

class Usuario : objetoBase {
public:
	Usuario(string Nombre); // nuevo
	Usuario(string, bool, string); // con archivo
	Usuario();
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
	virtual Usuario& autoread(ifstream&);

	//Atributos
	Lista<Prestamo> prestamos;//Lista de prestamos 
private:
	string nombre;
	string id;
	bool estado;
	static int cont;
};

#endif