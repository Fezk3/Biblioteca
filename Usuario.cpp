#include "Usuario.h"
Usuario::Usuario(string Nombre, string ID, int Cantidad, bool Estado) :nombre(Nombre), id(ID), cantidad_l(Cantidad), estado(Estado) {

}

Usuario::~Usuario() {

}
void Usuario::setNombre(string Nombre) {
	this->nombre = Nombre;
}

void Usuario::setId(string ID) {
	this->id = ID;
}

void Usuario::setCantidad_L(int Cantidad) {
	this->cantidad_l = Cantidad;
}

void Usuario::setEstado(bool Estado) {
	this->estado = Estado;
}

string Usuario::getNombre() {
	return nombre;
}

string Usuario::getId() {
	return id;
}

int Usuario::getCantidad() {
	return cantidad_l;
}

bool Usuario::getEstado() {
	return estado;
}

string Usuario::toString() {
	stringstream s;
	s << "Nombre: " << getNombre() << endl;
	s << "ID: " << getId() << endl;
	s << "Libros prestados: " << getCantidad() << endl;
	if (getEstado() == false) { s << "Estado: inactivo" << endl; }
	else { s << "Estado: activo" << endl; }
	return s.str();
}

