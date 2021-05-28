#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
    Usuarios;
    Coleccion;
}

void Biblioteca::AgregarLibro(Libro* Nuevo)
{
    Coleccion.agregar(Nuevo);
}

void Biblioteca::AgregarUsuario(Usuario* Nuevo)
{
    Usuarios.agregar(Nuevo);
}

void Biblioteca::MostarLibro()
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

void Biblioteca::MostrarDisp(string ID)
{
    Coleccion.disponibilidad(ID);
}

void Biblioteca::MostrarEspeLibro(int ID)
{
    Coleccion.mostrarEspecifico(ID);
}

void Biblioteca::MostrarEspeUsuario(int ID)
{
    Usuarios.mostrarEspecifico(ID);
}


Biblioteca::~Biblioteca()
{
}
