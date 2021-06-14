#pragma once
#pragma warning(disable : 4996)
#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <iostream>
#include <sstream>
#include <ctime>
#include "ObjetoBase.h"
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;

class Prestamo : objetoBase
{

private:

	string id_libro;
	string id_usuario;
	string dia_prestamo;
	string dia_vencimiento;
	static int num;
	string id;


public:

	Prestamo(string, string);
	virtual ~Prestamo();

	//sets
	void setIdLibro(string);
	void setIdUsuario(string);
	void setDiaInicio();
	void setVencimiento();
	
	//gets
	string getIdLibro();
	string getIdUsuario();
	string getDiaInicio();
	string getVencimiento();
	string getId();

	virtual string toString();

};

#endif