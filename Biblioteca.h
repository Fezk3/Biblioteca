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
    virtual void AgregarLibro(Libro*);
    virtual void AgregarUsuario(Usuario*);
    virtual void MostarLibros();
    virtual void MostarUsuarios();
    virtual void MostarLibro(string);//Muestra libro
    virtual void MostrarListaFiltrada(string);//Muestra la lista por el filtro de titulo o materia o autores 
    virtual void MostrarCantidadLibrosEspc(string); // Muestra la cantidad de libros que hay disponibles de un libro(Sin importar el estado)
    virtual bool EliminarLibro(string);
    virtual bool EliminarUsuario(string);
    virtual void MostrarDisp(string);//Muestra la cantidad unidades disponibles (Libros) en especifico
    virtual void MostrarEspeUsuario(string); //Muestra persona en especifico
    virtual void MostarMaterias();// muestra las materias
    virtual Usuario *TraerUsuario(string); //Trae un usuario con el metodod de Retorna  *T 
    virtual virtual ~Biblioteca();


    Lista<Libro> Coleccion;//Se guardan todos los libros
    Lista<Usuario> Usuarios;//Los administradores o bibliotecarios
};

#endif // !BIBLIOTECA_H



