#include "Prestamo.h"

// id unico por prestamo
int Prestamo::num = 1;

Prestamo::Prestamo(string id_libro, string id_usuario, string dia_prestamo, string dia_vencimiento) : id_libro(id_libro), id_usuario(id_usuario), dia_prestamo(dia_prestamo), dia_vencimiento(dia_vencimiento) {

	this->id += std::to_string(num);
	num++;

}

Prestamo::~Prestamo() {

}

//sets
void Prestamo::setIdLibro(string id_libro) {

	this->id_libro = id_libro;

}

void Prestamo::setIdUsuario(string id_usuario) {

	this->id_usuario = id_usuario;

}

void Prestamo::setDiaInicio(string dia_prestamo) {

	this->dia_prestamo = dia_prestamo;

}

void Prestamo::setVencimiento(string dia_vencimiento) {

	this->dia_vencimiento = dia_vencimiento;

}

//gets
string Prestamo::getIdUsuario() {

	return id_usuario;

}

string Prestamo::getIdLibro() {

	return id_libro;

}

string Prestamo::getVencimiento() {

	return dia_vencimiento;

}

string Prestamo::getDiaInicio() {

	return dia_prestamo;

}

string Prestamo::getId() {

	return id;

}

//methods
string Prestamo::toString() {

	stringstream x;

	x << "Numero de prestamo: " << id << std::endl;
	x << "Id del usuario: " << id_usuario << std::endl;
	x << "Id del libro prestado: " << id_libro << std::endl;
	x << "Dia en que se realizo el prestamo: " << dia_prestamo << std::endl;
	x << "Dia de vencimiento (3 dias despues): " << dia_vencimiento << std::endl;

	return x.str();

}

