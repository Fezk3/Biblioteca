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
	void borrar(string);

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

	if (head == NULL) {

		std::cout << "Lista vacia" << std::endl;

	}
	else {

		while (aux != NULL) {

			std::cout << aux->toString();
			std::cout << "------------" << std::endl;
			aux = aux->getSig();

		}

	}
	
}

template <class T>
void Lista<T>::borrar(string id) {

	if (head != NULL) {

		Nodo<T>* borrar;
		Nodo<T>* anterior;
		borrar = head;
		anterior = NULL;

		while (borrar != NULL) {

			if (borrar->getDato()->getId() == id) {

				break;

			}

			anterior = borrar;
			borrar = borrar->getSig();

		}

		if (borrar == NULL) {

			cout << "El Elemento No Existe\n";

		}
		else {
			//elimina el primer nodo de la lista
			if (anterior == NULL) {

				head = head->getSig();
				delete borrar;

			}
			else {

				anterior->setSig(borrar->getSig());
				delete borrar;

			}

		}

	}


}

#endif