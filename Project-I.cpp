// Project-I.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Libro.h"
#include "Usuario.h"
#include "Prestamo.h"
#include "Lista.h"

int main()
{
    /*
    Lista<Libro> L;
    Libro *l1 = new Libro("Mort", "Terry", "Novel", "2003", "Idk", true, "1");
    Libro* l2 = new Libro("Lart", "Terry", "Novel", "2003", "Idk", true, "2");
    Libro* l3 = new Libro("Uwu", "Terry", "Novel", "2003", "Idk", true, "3");
    Libro* l4 = new Libro("owo", "Terrys", "Novel", "2003", "Idk", true, "4");
    L.agregar(l1); L.agregar(l2); L.agregar(l3); L.agregar(l4);
    L.mostrarListaFiltrada("Terry");
    L.mostrarEspecifico("1");

    cout<<L.cantidadNodos();  // para cantidad de ejemplares

    */
    
    // pruba lista usuarios

   
    
    Lista<Usuario> l2;
    Usuario* u = new Usuario("Fezk3", "123", 4, false);
    l2.agregar(u);
    l2.mostrar();

    //l2.borrar("123");

   // l2.mostrar();

    
    
    Lista<Prestamo> p;
    Prestamo* p1 = new Prestamo("63", "123", "Martes", "Viernes");
    Prestamo* p2 = new Prestamo("342", "2", "Martes", "Viernes");
    Prestamo* p3 = new Prestamo("910", "1", "Martes", "Viernes");
   // p.agregar(p1); p.agregar(p2); p.agregar(p3);
   // p.mostrarPedido(3);
    
    u->prestamo(p1);
    u->prestamo(p2);
    u->mostrarPrestamos();
    
    cout << "despues de devolver\n\n";

    u->devolver(1);
    u->mostrarPrestamos();
    
    return 0;
}

