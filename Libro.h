#pragma once
#ifndef LIRBO_H
#define LIBRO_H
#include <iostream>
#include <sstream>
#include <string>
#include "ObjetoBase.h"
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;

class Libro  : objetoBase {

private:

	string titulo;
	string autores;
	string materia;
	string annio_edi;
	string editorial;
	bool estado;
	static int cont;
	string id;

public:

	Libro(string, string, string,string,string,bool);
	virtual ~Libro();

	// sets
	void setEstado(bool);

	// gets

	string getTitulo();
	string getAutores();
	string getMateria();
	string getAnnio_eddi();
	string getEditorial();
	bool getEstado();
	string getId();

	// methods

	virtual string toString();

};

#endif // !LIRBO_H
