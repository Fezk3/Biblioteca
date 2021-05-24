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
	void mostrar(); // muestra la lista completa con tostring
	void borrar(int);
	void disponibilidad(string); // cuantos ejemplares de un libro hay apartir del titulo
	void mostrarListaFiltrada(string); // 
	void mostrarPedido(int);
	void mostrarEspecifico(int);
	int cantidadNodos(string); // filtrar por string 
	void cambioEstado(int); // activo/suspendido || disponible/prestado

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
void Lista<T>::borrar(int id) {

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

		if (aux->getDato()->getTitulo() == dispo) {

			encontrado = true;

		}

		aux = aux->getSig();

	}

	if (encontrado == true) {

		std::cout << "Libro " << dispo << " esta disponible con un total de " << cantidadNodos(dispo) << std::endl;

	}
	else {

		std::cout << "No existe el libro solicitado";

	}


}

template <class T>
void Lista<T>::mostrarListaFiltrada(string filtro) {

	Nodo<T> *aux = head;
	bool encontrado = false;

	while (aux != NULL) {

		if(aux->getDato()->getMateria() == filtro || aux->getDato()->getAutores() == filtro || aux->getDato()->getTitulo() == filtro) {

			std::cout << aux->getDato()->getTitulo() << std::endl;
			encontrado = true;

		}

		aux = aux->getSig();

	}

	if (aux == NULL && encontrado == false) {

		std::cout << "El libro solicitado no se encuentra disponible o no esta en la base de datos de la biblioteca" << std::endl;

	}

}


template <class T>
void Lista<T>::mostrarPedido(int ped) {

	Nodo<T>* aux = head;

	while (aux != NULL) {

		if (aux->getDato()->getId() == ped) {

			std::cout << aux->getDato()->toString();
			break;

		}

		aux = aux->getSig();

	}

}

template <class T>
void Lista<T>::mostrarEspecifico(int dato) {

	Nodo<T>* aux = head;
	bool enc = false;

	if (head == NULL) {

		std::cout << "No disponible" << std::endl;

	}
	else {

		while (aux != NULL) {

			if (aux->getDato()->getId() == dato) {

				std::cout << aux->getDato()->toString();
				enc = true;

			}

			aux = aux->getSig();

		}

	}

	if (aux == NULL && enc == false) {

		std::cout << "El dato solicitado no se encuentra disponible o no esta en la base de datos de la biblioteca" << std::endl;

	}

}

template<class T>
int Lista<T>::cantidadNodos(string titulo) {

	Nodo<T>* aux = head;
	int cant = 0;

	
	while (aux != NULL) {

		if (aux->getDato()->getEstado() == true && aux->getDato()->getTitulo() == titulo) {

			cant++;

		}

		aux = aux->getSig();

	}

	return cant;

}

template<class T>
void Lista<T>::cambioEstado(int id) {

	Nodo<T>* aux = head;

	while (aux != NULL) {

		if (aux->getDato()->getId() == id) {

			(aux->getDato()->getEstado() ? aux->getDato()->setEstado(false) : aux->getDato()->setEstado(true));
			break;

		}

		aux = aux->getSig();

	}

}

#endif