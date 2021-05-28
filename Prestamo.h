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

	int id_libro;
	int id_usuario;
	string dia_prestamo;
	string dia_vencimiento;
	static int num;
	int id;


public:

	Prestamo(int, int, string, string);
	~Prestamo();

	//sets
	void setIdLibro(int);
	void setIdUsuario(int);
	void setDiaInicio(string);
	void setVencimiento(string);
	
	//gets
	int getIdLibro();
	int getIdUsuario();
	string getDiaInicio();
	string getVencimiento();
	int getId();

	string toString();

};

#endif