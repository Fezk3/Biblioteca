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
	virtual ~Nodo() {};

	// sets
	void setDato(T* dato) { this->dato = dato; }
	void setSig(Nodo<T>* sig) { this->sig = sig; }

	//gets
	Nodo<T>* getSig() { return sig; }
	T* getDato() { return dato; }


};

// Class methods implemetation since its a template (No .cpp needed)
template <class T>
Nodo<T>::Nodo(T* dato) : dato(dato), sig(NULL) {

}

#endif