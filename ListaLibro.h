#pragma once
#ifndef ListaLibro_H
#define ListaLibro_H
#include "NodoLibro.h"
#include <iostream>
#include <sstream>
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;

class ListaLibro {

private:

	NodoLibro* head;

public:

	ListaLibro();
	~ListaLibro();

	// methods

	virtual void agregarLibro(Libro*);
	virtual void EliminarLibro(Libro*);
	virtual void mostrarLibro();
	virtual bool buscarLibro(string);
	virtual void mostrarColeccion();

};

#endif // !ListaLibro_H
