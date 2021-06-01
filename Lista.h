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
	void mostrarListaFiltrada(string); // muestra los distintos ejemplares de libros segun el criterio dado
	void mostrarEspecifico(int); // mostrar ibj especifico con tostring 
	int cantidadNodosEspec(string); // cantidad de nodos en base al titulo de un libro
	int cantidadTotalNodos(); // total de nodos en la lista -> usar por si user quiere ver el total de libros tiene la biblioteca
	void cambioEstado(int); // activo/suspendido || disponible/prestado
	void mostrarMaterias(); //incompleto
	int LibroDisponible(string); // retorna el primer id del primer libro disponible en base al titulo, para el prestamo
	T* retornaObj(int id); // retorna objs en base al id 

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

		std::cout << "Libro " << dispo << " esta disponible con un total de " << cantidadNodosEspec(dispo) << std::endl;

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

			std::cout <<"Libro: "<< aux->getDato()->getTitulo() << std::endl;
			std::cout << "----------\n";
			encontrado = true;

		}

		aux = aux->getSig();

	}

	if (aux == NULL && encontrado == false) {

		std::cout << "El libro solicitado no se encuentra disponible o no esta en la base de datos de la biblioteca" << std::endl;

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

		std::cout << "El dato solicitado no se encuentra disponible o no esta en la base de datos" << std::endl;

	}

}

template<class T>
int Lista<T>::cantidadNodosEspec(string titulo) {

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
int Lista<T>::cantidadTotalNodos() {

	Nodo<T>* aux = head;
	int cant = 0;


	while (aux != NULL) {


		cant++;

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

template <class T>
int Lista<T>::LibroDisponible(string titulo) {

	Nodo<T>* aux = head;

	while (aux != NULL) {

		if (aux->getDato()->getEstado() == true) {

			return aux->getDato()->getId();

		}

		aux = aux->getSig();

	}

	return 0;

}

template<class T>
T *Lista<T>::retornaObj(int id) {

	Nodo<T>* aux = head;
	
	while (aux != NULL)
	{

		if (aux->getDato()->getId() == id) {

			return aux->getDato();

		}

		aux = aux->getSig();

	}

	return NULL; // si no se encuentra

}

template <class T>
void Lista<T>::mostrarMaterias() {

	Nodo<T>* aux = head;

	string mate[10] = {"", "", "", "", "", "", "", ""};
	int j = 0;

	while (aux != NULL) {

		mate[j] = aux->getDato()->getMateria();

		aux = aux->getSig();
		j++;

	}
	
	cout << "Las materias de las que se dispone son: \n";

	for (int k = 0; k < 8; k++) {

		if (mate[k] != "") {

			cout << mate[k] << endl;

		}

	}

}

#endif