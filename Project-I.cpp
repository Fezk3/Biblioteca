// Project-I.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Libro.h"
#include "Usuario.h"
#include "Lista.h"

int main()
{
    
    Lista<Libro> L;
    Libro *l1 = new Libro("Mort", "Terry", "Novel", "2003", "Idk", true, "1", 4);
    Libro* l2 = new Libro("Lart", "Terry", "Novel", "2003", "Idk", true, "2", 4);
    Libro* l3 = new Libro("Uwu", "Terry", "Novel", "2003", "Idk", true, "3", 4);
    Libro* l4 = new Libro("owo", "Terrys", "Novel", "2003", "Idk", true, "4", 4);
    L.agregar(l1); L.agregar(l2); L.agregar(l3); L.agregar(l4);
    L.mostrarListaFiltrada("Novel");

    
    // pruba lista usuarios

    /*

    Lista<Usuario> l2;
    Usuario* u = new Usuario("Fezk3", "123", 4, false);
    l2.agregar(u);
    l2.mostrar();

    l2.borrar("123");

    l2.mostrar();

    */

    return 0;
}

