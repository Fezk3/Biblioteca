#include "Usuario.h"

int Usuario::cont = 1;

Usuario::Usuario(string Nombre, int Cantidad, bool Estado) :nombre(Nombre), cantidad_l(Cantidad), estado(Estado) {

	prestamos; // lista de prestamos
	this->id = cont;
	cont++;

}

Usuario::~Usuario() {

}
void Usuario::setNombre(string Nombre) {
	this->nombre = Nombre;
}

void Usuario::setId(int ID) {
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

int Usuario::getId() {
	return id;
}

int Usuario::getCantidad() {
	return cantidad_l;
}

bool Usuario::getEstado() {
	return estado;
}

void Usuario::prestamo(Prestamo *nuevoP) {

	prestamos.agregar(nuevoP);

}

void Usuario::mostrarPrestamos() {

	prestamos.mostrar();

}

void Usuario::devolver(int id) {

	prestamos.borrarPrestamo(id);

}

string Usuario::toString() {
	stringstream s;
	s << "Nombre: " << getNombre() << endl;
	s << "ID: " << getId() << endl;
	s << "Libros prestados: " << getCantidad() << endl;
	s << "Estado del prestamo: " << (estado ? "Activo" : "Inactivo") << std::endl;

	return s.str();
}

