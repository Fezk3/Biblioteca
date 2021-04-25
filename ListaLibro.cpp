#include "ListaLibro.h"

ListaLibro::ListaLibro(): head(NULL) {

}

ListaLibro::~ListaLibro() {

	NodoLibro* borrar;

	while (head != NULL)
	{
		borrar = head;
		head = head->getSig();
		borrar->setSig(NULL);
		delete borrar;
	}

}

void ListaLibro::agregarLibro(Libro* libro) {

	NodoLibro* aux = new NodoLibro(libro);

	if (head == NULL) {
		head = aux;
	}
	else
	{
		aux->setSig(head);
		head = aux;
	}

}

void ListaLibro::EliminarLibro(Libro* lib) {

	NodoLibro* lib = new NodoLibro(lib);
	
	NodoLibro* aux = head;
	NodoLibro* aux2;

	if (aux == NULL) {
		cout << "El libro no existe" << endl;
	}
	if (aux->getLibro()->getId() == lib->getId()) {
		aux2 = aux->getSig();
		delete aux;
		head = aux2;
	}
	else
	{
		while (aux != NULL) {

			if (aux->getLibro()->getId() == lib->getId()) {

				aux->setSig(aux->getSig()->getSig());

			}

			aux = aux->getSig();

		}
	}

}

void ListaLibro::mostrarColeccion() {

	NodoLibro* aux = head;

	if (aux == NULL) {

		cout << "Lista vacia :(" << endl;

	}

	while (aux != NULL) {

		cout<< aux->getLibro()->tostring()<<endl;
		aux = aux->getSig();

	}

}

bool ListaLibro::buscarLibro(string buscado) {

	NodoLibro* aux = head;

	while (aux != NULL) {

		if (buscado == aux->getLibro()->getId() || buscado == aux->getLibro()->getAutores() || buscado == aux->getLibro()->getTitulo()) {

			return true;

		}

	}

	return false;

}

void ListaLibro::mostrarLibro() {

	string id;
	NodoLibro* aux = head;

	if (buscarLibro(id)) {

		while (aux != NULL) {

			if (id == aux->getLibro()->getId()) {

				cout << aux->getLibro()->tostring();

			}

		}

	}
	else
	{
		cout << "El libro no pertenece a la coleccion" << endl;
	}

}