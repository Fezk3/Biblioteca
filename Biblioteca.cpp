#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
}

void Biblioteca::AgregarLibro(Libro* Nuevo)
{
    Coleccion.agregar(Nuevo);
}

void Biblioteca::AgregarUsuario(Usuario* Nuevo)
{
    Usuarios.agregar(Nuevo);
}

void Biblioteca::MostarLista()
{
    Coleccion.mostrar();
}

void Biblioteca::MostarUsuarios()
{
    Usuarios.mostrar();
}

void Biblioteca::MostarLibro(int ID)
{
    Coleccion.mostrarEspecifico(ID);
}

void Biblioteca::MostrarListaFiltrada(string ToE)
{
    Coleccion.mostrarListaFiltrada(ToE);
}

void Biblioteca::EliminarLibro(int ID)
{
    Coleccion.borrar(ID);
}

void Biblioteca::EliminarUsuario(int ID)
{
    Usuarios.borrar(ID);
}

Biblioteca::~Biblioteca()
{
}
