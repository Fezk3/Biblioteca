#pragma once
#ifndef NodoLibro_H
#define NodoLibro_H
#include "Libro.h"


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


