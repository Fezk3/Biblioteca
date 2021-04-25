#pragma once
#ifndef NodoLibro_H
#define NodoLibro_H
#include <iostream>
#include <sstream>
#include "Libro.h"
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;

class NodoLibro {

private:

	Libro* dato;
	NodoLibro* sigDato;

public:

	NodoLibro(Libro*);
	~NodoLibro();

	// sets

	void setLibro(Libro*);
	void setSig(NodoLibro*);

	// gets

	Libro* getLibro();
	NodoLibro* getSig();

};

#endif // !NodoLibro_


