#pragma once
#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>
using std::string; using std::stringstream; using std::cout; using std::endl; using std::cin;

class Usuario {
public:
	Usuario(string Nombre, string ID, int Cantidad, bool Estado);
	virtual ~Usuario();
	void setNombre(string Nombre);
	void setId(string ID);
	void setCantidad_L(int Cantidad);
	void setEstado(bool Estado);
	string getNombre();
	string getId();
	int getCantidad();
	bool getEstado();
	string toString();
private:
	string nombre;
	string id;
	int cantidad_l;//cantidad de libros prestados
	bool estado;
};

#endif