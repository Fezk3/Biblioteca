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

void Biblioteca::MostarLibros()
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

void Biblioteca::MostrarCantidadLibrosEspc(string Nombre)
{
    Coleccion.cantidadNodosEspec(Nombre);
}

void Biblioteca::EliminarLibro(int ID)
{
    Coleccion.borrar(ID);
}

void Biblioteca::EliminarUsuario(int ID)
{
    Usuarios.borrar(ID);
}

void Biblioteca::MostrarDisp(string titulo)
{
    Coleccion.disponibilidad(titulo);
}

void Biblioteca::MostrarEspeUsuario(int ID)
{
    Usuarios.mostrarEspecifico(ID);
}

void Biblioteca::MostarMaterias()
{
    Coleccion.mostrarMaterias();
}

Usuario *Biblioteca::TraerUsuario(int ID)
{
    return Usuarios.retornaObj(ID);
}


Biblioteca::~Biblioteca()
{
}
