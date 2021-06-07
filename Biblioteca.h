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
    void MostarLibros();
    void MostarUsuarios();
    void MostarLibro(string);//Muestra libro
    void MostrarListaFiltrada(string);//Muestra la lista por el filtro de titulo o materia o autores 
    void MostrarCantidadLibrosEspc(string); // Muestra la cantidad de libros que hay disponibles de un libro(Sin importar el estado)
    bool EliminarLibro(string);
    bool EliminarUsuario(string);
    void MostrarDisp(string);//Muestra la cantidad unidades disponibles (Libros) en especifico
    void MostrarEspeUsuario(string); //Muestra persona en especifico
    void MostarMaterias();// muestra las materias
    Usuario *TraerUsuario(string); //Trae un usuario con el metodod de Retorna  *T 
    ~Biblioteca();


    //Atributos
    Lista<Libro> Coleccion;//Se guardan todos los libros
    Lista<Usuario> Usuarios;//Los administradores o bibliotecarios
};

#endif // !BIBLIOTECA_H



