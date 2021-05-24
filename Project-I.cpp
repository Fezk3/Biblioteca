// Project-I.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Biblioteca.h"

int main()
{
    //Prueba Biblioteca (Funca)

    /*Biblioteca New;
    Libro* l1 = new Libro("Mort", "Terry", "Novel", "2003", "Idk", true, "1");
    New.AgregarLr(l1);
    New.LeerLr();
    
    */
    
    
  
    
    Lista<Libro> L;

    Libro *l1 = new Libro("Mort", "Terry", "Novela", "2003", "Idk", true);
    Libro* l2 = new Libro("Lart", "Terry", "Novela", "2003", "Idk", false);
    Libro* l3 = new Libro("Mort", "Terry", "Novela", "2003", "Idk", true);
    Libro* l4 = new Libro("owo", "Terrys", "Novela", "2003", "Idk", true);
    L.agregar(l1); L.agregar(l2); L.agregar(l3); L.agregar(l4);

    cout << "Segun el criterio de busqueda especificado, estos son los resultados: \n";

    L.mostrarListaFiltrada("Novela");

    cout << "\n\nEspecifico\n";

    L.mostrarEspecifico(3);

    L.cambioEstado(1);
    L.disponibilidad("Mort");
    
    
    
    // pruba lista usuarios

   
    /*
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
    */
    return 0;
}

