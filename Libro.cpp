#include "Libro.h"

int Libro::cont = 1;

Libro::Libro(string titulo, string autores, string materia, string annio_edi, string editorial, bool estado) : titulo(titulo), autores(autores),
materia(materia), annio_edi(annio_edi), editorial(editorial), estado(estado){

	this->id += std::to_string(cont);  // id unico automatico para cada libro
	cont++;

}

Libro::~Libro() {

}

// sets

void Libro::setEstado(bool estado) {

	this->estado = estado;

}

// gets

string Libro::getTitulo() {

	return titulo;

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

// methods

string Libro::toString() {

	stringstream x;
	
	x << "Titulo: " << titulo << endl;
	x << "Autor(es): " << autores << endl;
	x << "Materia: " << materia << endl;
	x << "Anio de Edicion: " << annio_edi << endl;
	x << "Estado: " << (estado ? "Disponible" : "No disponible")<<endl;
	x << "Id: " << id << endl;

	return x.str();

}