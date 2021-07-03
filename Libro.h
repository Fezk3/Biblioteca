#pragma once
#ifndef LIRBO_H
#define LIBRO_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "ObjetoBase.h"
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;
using std::ifstream;

class Libro  : public objetoBase {

private:

	string nombre;
	string autores;
	string materia;
	string annio_edi;
	string editorial;
	bool estado;
	static int cont;
	string id;

public:

	Libro(string, string, string,string,string,bool); // nuevo
	Libro(string, string, string, string, string, bool, string); // con archivo
	Libro();
	virtual ~Libro();

	// sets
	virtual void setEstado(bool);

	// gets

	virtual string getNombre();
	virtual string getAutores();
	virtual string getMateria();
	virtual string getAnnio_eddi();
	virtual string getEditorial();
	virtual bool getEstado();
	virtual string getId();

	// methods

	virtual string toString();
	virtual Libro& autoread(ifstream&);

};

#endif // !LIRBO_H
