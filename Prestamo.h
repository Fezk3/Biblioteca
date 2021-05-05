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
	bool estado;
	static int num;
	int id;


public:

	Prestamo(string, string, string, string);
	~Prestamo();

	//sets
	void setIdLibro(string);
	void setIdUsuario(string);
	void setDiaInicio(string);
	void setVencimiento(string);
	void setEstado(bool);
	
	//gets
	string getIdLibro();
	string getIdUsuario();
	string getDiaInicio();
	string getVencimiento();
	bool getEstado();
	int getId();

	string toString();

};

#endif