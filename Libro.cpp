#include "Libro.h"

int Libro::cont = 1;

Libro::Libro(string titulo, string autores, string materia, string annio_edi, string editorial, bool estado) : titulo(titulo), autores(autores),
materia(materia), annio_edi(annio_edi), editorial(editorial), estado(estado){

	this->id = cont;  // id unico automatico para cada libro
	cont++;

}

Libro::~Libro() {

}

// sets

void Libro::setTitulo(string titulo){

	this->titulo = titulo;

}

void Libro::setAutores(string autores) {

	this->autores = autores;

}

void Libro::setMateria(string materia) {

	this->materia = materia;

}

void Libro::setAnnio_edi(string annio_edi) {

	this->annio_edi = annio_edi;

}

void Libro::setEstado(bool estado) {

	this->estado = estado;

}

void Libro::setId(int id) {

	this->id = id;

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

int Libro::getId() {

	return id;

}

// methods

string Libro::toString() {

	stringstream x;
	
	x << "Titulo: " << getTitulo() << endl;
	x << "Autor(es): " << getAutores() << endl;
	x << "Materia: " << getMateria() << endl;
	x << "Anio de Edicion: " << getAnnio_eddi() << endl;
	x << "Estado: " << (getEstado() ? "Disponible" : "No disponible")<<endl;
	x << "Id: " << getId() << endl;

	return x.str();

}