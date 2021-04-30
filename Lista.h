#pragma once
#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"

template <class T>
class Nodo;

template<class T>
class Lista {

private:

	Nodo<T>* head;

public:

	Lista() { head = NULL; }
	virtual ~Lista();

	void agregar(T* dato);
	void mostrar();

};

template <class T>
Lista<T>::~Lista() {

	Nodo<T>* borrar;

	while (head != NULL) {

		borrar = head;
		head = head->getSig();
		borrar->setSig(NULL);
		delete borrar;

	}

}

template <class T>
void Lista<T>::agregar(T* dato) {

	Nodo<T>* aux = new Nodo<T>(dato);

	if (head == NULL) {

		head = aux;

	}
	else {

		aux->setSig(head);
		head = aux;

	}

}

template <class T>
void Lista<T>::mostrar() {

	Nodo<T>* aux = head;

	while (aux != NULL) {

		std::cout << aux->getDato()->toString();
		std::cout << "------------" << std::endl;
		aux = aux->getSig();

	}

}

#endif