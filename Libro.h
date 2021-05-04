#pragma once
#ifndef LIRBO_H
#define LIBRO_H
#include <iostream>
#include <sstream>
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;

class Libro {

private:

	string titulo;
	string autores;
	string materia;
	string annio_edi;
	string editorial;
	bool estado;
	string id;
	int cantidad;

public:

	Libro(string, string, string,string,string,bool,string,int);
	~Libro();

	// sets
	void setTitulo(string);
	void setAutores(string);
	void setMateria(string);
	void setAnnio_edi(string);
	void setEditorial(string);
	void setEstado(bool);
	void setId(string);
	void setCantidad(int);

	// gets

	string getTitulo();
	string getAutores();
	string getMateria();
	string getAnnio_eddi();
	string getEditorial();
	bool getEstado();
	string getId();
	int getCantidad();

	// methods

	string toString();

};

#endif // !LIRBO_H
