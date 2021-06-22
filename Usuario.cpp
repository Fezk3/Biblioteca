#include "Usuario.h"

int Usuario::cont = 1;

Usuario::Usuario(string Nombre) :nombre(Nombre) {

	this->id += std::to_string(cont);
	estado = true;
	cont++;

}

Usuario::Usuario(string nombre, bool estado, string id) : nombre(nombre), estado(estado), id(id) {

	cont++;
}

Usuario::Usuario() {

	nombre = "";
	estado = 0;
	id = "0";

}

Usuario::~Usuario() {

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

	s << "Nombre: " << nombre << endl;
	s << "ID: " << id << endl;
	s << "Libros prestados: " << prestamos.cantidadTotalNodos() << endl;
	s << "Estado: " << (estado ? "Activo" : "Inactivo") << std::endl;

	return s.str();
}

Usuario& Usuario::autoread(ifstream& z) {

	string nombre, id;
	bool estado;

	getline(z, nombre);
	z >> estado;
	z >> id;
	z.ignore();

	return(*new Usuario(nombre, estado, id));

}