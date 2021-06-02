#include "Usuario.h"

int Usuario::cont = 1;

Usuario::Usuario(string Nombre,  bool Estado) :nombre(Nombre), estado(Estado) {

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


void Usuario::setEstado(bool Estado) {
	this->estado = Estado;
}

string Usuario::getNombre() {
	return nombre;
}

int Usuario::getId() {
	return id;
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

int Usuario::devolver(int id) {

	Prestamo* temp = prestamos.retornaObj(id); // prestamo a devolver

	int libroId = temp->getIdLibro();

	cout << temp->toString()<<endl;

	prestamos.borrar(id);

	cout << "Libro id en metodo devolver:   " << libroId << endl;

	return libroId;  // id del libro que se devuelve para cambiar su estado en la lista de libros de la biblioteca

}

bool Usuario::checkPrestamo(int idPres) {

	if (prestamos.cantidadTotalNodos() == 0 || prestamos.estaContenido(id) == false) {

		return false;

	}

	return true;

}

int Usuario::cantidadPrestamos() {

	return prestamos.cantidadTotalNodos();

}

string Usuario::toString() {

	stringstream s;

	s << "Nombre: " << getNombre() << endl;
	s << "ID: " << getId() << endl;
	s << "Libros prestados: " << prestamos.cantidadTotalNodos() << endl;
	s << "Estado: " << (estado ? "Activo" : "Inactivo") << std::endl;

	return s.str();
}

