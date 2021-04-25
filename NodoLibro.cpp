#include "NodoLibro.h"

NodoLibro::NodoLibro(Libro* dato) : dato(dato), sigDato(NULL){

}

NodoLibro::~NodoLibro() {

}

// sets 

void NodoLibro::setLibro(Libro* dato) {

	this->dato = dato;

}

void NodoLibro::setSig(NodoLibro* sigDato){

	this->sigDato = sigDato;

}

// gets

Libro* NodoLibro::getLibro() {

	return dato;

}

NodoLibro* NodoLibro::getSig() {

	return sigDato;

}

