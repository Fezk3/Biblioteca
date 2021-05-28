#pragma once
#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>
#include "Lista.h"
#include "Prestamo.h"
using std::string; using std::stringstream; using std::cout; using std::endl; using std::cin;

class Usuario {
public:
	Usuario(string Nombre, int Cantidad, bool Estado);
	virtual ~Usuario();
	void setNombre(string Nombre);
	void setId(int ID);
	void setCantidad_L(int Cantidad);
	void setEstado(bool Estado);
	string getNombre();
	int getId();
	int getCantidad();
	bool getEstado();
	void prestamo(Prestamo*);
	void mostrarPrestamos();
	int devolver(int id); // retorna id del libro que esta devolviendo
	string toString();
private:
	string nombre;
	int id;
	int cantidad_l;//cantidad de libros prestados
	bool estado;
	static int cont;
	Lista<Prestamo> prestamos;
};

#endif