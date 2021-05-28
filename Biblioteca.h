#pragma once
#include "Libro.h"
#include "Lista.h"
#include "Usuario.h"
#include "Prestamo.h"
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
class Biblioteca
{
public:

    Biblioteca();
    void AgregarLibro(Libro*);
    void AgregarUsuario(Usuario*);
    void MostarLibro();
    void MostarUsuarios();
    void MostarLibro(int);//Muestra libro o pedido en especifico
    void MostrarListaFiltrada(string);//Muestra la lista por el filtro de titulo o materia o autores 
    void EliminarLibro(int);
    void EliminarUsuario(int);
    void MostrarDisp(string);//Muestra la cantidad unidades disponibles (Libros)
    void MostrarEspeLibro(int);//Muestra un libro en especifico
    void MostrarEspeUsuario(int); //Muestra persona en especifico
    ~Biblioteca();

private:
    Lista<Libro> Coleccion;//Se guardan todos los libros
    Lista<Usuario> Usuarios;//Los administradores o bibliotecarios
};

#endif // !BIBLIOTECA_H



