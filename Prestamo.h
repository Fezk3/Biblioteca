#pragma once
#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <iostream>
#include <sstream>
using std::string;
using std::stringstream;
using std::endl;
using std::cout;
using std::cin;

class Prestamo
{

private:

	string id_libro;
	string id_usuario;
	string dia_prestamo;
	string dia_vencimiento;
	static int num;
	string id;


public:

	Prestamo(string, string, string, string);
	virtual ~Prestamo();

	//sets
	void setIdLibro(string);
	void setIdUsuario(string);
	void setDiaInicio(string);
	void setVencimiento(string);
	
	//gets
	string getIdLibro();
	string getIdUsuario();
	string getDiaInicio();
	string getVencimiento();
	string getId();

	string toString();

};

#endif