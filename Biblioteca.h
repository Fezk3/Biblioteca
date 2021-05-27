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
    void MostarLista();
    void MostarUsuarios();
    void MostarLibro(int);//Muestra libro o pedido en especifico
    void MostrarListaFiltrada(string);//Muestra la lista por el filtro de titulo o Editoral o año 
    void EliminarLibro(int);
    void EliminarUsuario(int);
    ~Biblioteca();

private:
    Lista<Libro> Coleccion;//Se guardan todos los libros
    Lista<Usuario> Usuarios;//Los administradores o bibliotecarios
};

#endif // !BIBLIOTECA_H



