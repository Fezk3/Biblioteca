#pragma once
#pragma warning(disable : 4996)
#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <iostream>
#include <sstream>
#include <ctime>
#include <fstream>
#include "ObjetoBase.h"
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;
using std::ifstream;

class Prestamo : objetoBase
{

private:

	string usuario;
	string libro;
	string id_libro;
	string id_usuario;
	string dia_prestamo;
	string dia_vencimiento;
	static int num;
	string id;


public:

	Prestamo(string, string, string, string); // nuevos prestamos -> fechas auto
	Prestamo(string, string, string, string, string, string); // para cargar de archivo
	virtual ~Prestamo();

	//sets
	virtual void setIdLibro(string);
	virtual void setIdUsuario(string);
	virtual void setDiaInicio();
	virtual void setVencimiento();
	
	//gets
	virtual string getIdLibro();
	virtual string getIdUsuario();
	virtual string getDiaInicio();
	virtual string getVencimiento();
	virtual string getId();

	virtual string toString();

	//methods

	Prestamo& autoread(ifstream&);

};

#endif