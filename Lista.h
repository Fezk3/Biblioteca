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
	void disponibilidad(string);
	void mostrarListaFiltrada(string);

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

template <class  T>
void Lista<T>::disponibilidad(string dispo) {

	Nodo<T>* aux = head;
	bool encontrado = false;

	while (aux != NULL) {

		if(aux->getDato()->getTitulo() == dispo) {

			std::cout << "Libro " << aux->getDato()->getTitulo() << " esta disponible con un total de " << aux->getDato()->getCantidad() << std::endl;
			encontrado = true;

		}

		aux = aux->getSig();

	}

	if (aux == NULL && encontrado == false) {

		std::cout << "El libro solicitado no se encuentra disponible o no esta en la base de datos de la biblioteca" << std::endl;

	}

}

template <class T>
void Lista<T>::mostrarListaFiltrada(string filtro) {

	Nodo<T> *aux = head;
	bool encontrado = false;

	while (aux != NULL) {

		if (aux->getDato()->getMateria() == filtro || aux->getDato()->getAutores() == filtro) {

			std::cout << aux->getDato()->getTitulo() << std::endl;
			encontrado = true;

		}

		aux = aux->getSig();

	}

	if (aux == NULL && encontrado == false) {

		std::cout << "El libro solicitado no se encuentra disponible o no esta en la base de datos de la biblioteca" << std::endl;

	}

}

#endif