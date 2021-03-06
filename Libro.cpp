#include "Libro.h"

int Libro::cont = 1;

Libro::Libro(string nombre, string autores, string materia, string annio_edi, string editorial, bool estado) : nombre(nombre), autores(autores),
materia(materia), annio_edi(annio_edi), editorial(editorial), estado(estado){

	this->id += std::to_string(cont);  // id unico automatico para cada libro
	cont++;

}

Libro::Libro(string nombre, string autores, string materia, string annio_edi, string editorial, bool estado, string id) : nombre(nombre), autores(autores),
materia(materia), annio_edi(annio_edi), editorial(editorial), estado(estado), id(id) {

	cont++;

}

Libro::Libro() {

	nombre = ""; materia = ""; editorial = ""; id = "0";
	autores = ""; annio_edi = ""; estado = 0;

}

Libro::~Libro() {

}

// sets

void Libro::setEstado(bool estado) {

	this->estado = estado;

}

// gets

string Libro::getNombre() {

	return nombre;

}

string Libro::getAutores() {

	return autores;

}

string Libro::getMateria() {

	return materia;

}

string Libro::getAnnio_eddi() {

	return annio_edi;

}

bool Libro::getEstado() {

	return estado;

}

string Libro::getId() {

	return id;

}

string Libro::getEditorial() {

	return editorial;

}

// methods

string Libro::toString() {

	stringstream x;
	
	x << "Titulo: " << nombre << endl;
	x << "Autor(es): " << autores << endl;
	x << "Materia: " << materia << endl;
	x << "Anio de Edicion: " << annio_edi << endl;
	x << "Editorial: " << editorial << endl;
	x << "Estado: " << (estado ? "Disponible" : "Prestado")<<endl;
	x << "Id: " << id << endl;

	return x.str();

}

Libro& Libro::autoread(ifstream& z) {

	string nombre, autores, materia, annio_edi, editorial, id;
	bool estado;

	getline(z, nombre);
	z >> autores;
	z >> materia;
	z >> annio_edi;
	z >> editorial;
	z >> estado;
	z >> id;

	z.ignore();

	return(*new Libro(nombre, autores, materia, annio_edi, editorial, estado, id));

}