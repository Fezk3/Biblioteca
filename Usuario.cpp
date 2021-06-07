#include "Usuario.h"

int Usuario::cont = 1;

Usuario::Usuario(string Nombre,  bool Estado) :nombre(Nombre), estado(Estado) {

	prestamos; // lista de prestamos
	this->id += std::to_string(cont);
	cont++;

}

Usuario::~Usuario() {

}
void Usuario::setNombre(string Nombre) {
	this->nombre = Nombre;
}

void Usuario::setId(string ID) {
	this->id = ID;
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


bool Usuario::getEstado() {
	return estado;
}

void Usuario::prestamo(Prestamo *nuevoP) {

	prestamos.agregar(nuevoP);

}

void Usuario::mostrarPrestamos() {

	prestamos.mostrar();

}

string Usuario::devolver(string id) {

	Prestamo* temp = prestamos.retornaObj(id); // prestamo a devolver

	string libroId = temp->getIdLibro();

	cout << temp->toString()<<endl;

	prestamos.borrar(id);

	return libroId;  // id del libro que se devuelve para cambiar su estado en la lista de libros de la biblioteca

}

bool Usuario::checkPrestamo(string idPres) {

	if (prestamos.cantidadTotalNodos() == 0 || prestamos.estaContenido(idPres) == false) {

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

