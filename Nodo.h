#pragma once
#ifndef NODO_H
#define NODO_H
#include <iostream>

template <class T>
class Nodo {

private:

	T* dato;
	Nodo<T>* sig;

public:

	Nodo(T*);
	virtual ~Nodo();

	// sets
	void setDato(T* dato);
	void setSig(Nodo<T>* sig);

	//gets
	Nodo<T>* getSig();
	T* getDato();

	//methods
	string toString();

};

// Class methods implemetation since its a template (No .cpp needed)
template <class T>
Nodo<T>::Nodo(T* dato) : dato(dato), sig(NULL) {

}

template <class T>
Nodo<T>::~Nodo() {

}

//sets
template <class T>
void Nodo<T>::setDato(T* dato) {

	this->dato = dato;

}

template <class T>
void Nodo<T>::setSig(Nodo<T>* sig) {

	this->sig = sig;

}

//gets
template <class T>
T* Nodo<T>::getDato() {

	return dato;

}

template <class T>
Nodo<T>* Nodo<T>::getSig() {

	return sig;

}

//methods
template <class T>
string Nodo<T>::toString() {

	stringstream x;

	x << dato->toString() << endl;

	return x.str();

}

#endif