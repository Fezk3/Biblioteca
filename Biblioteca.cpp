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

void Biblioteca::MostarLibro(string ID)
{
    Coleccion.mostrarEspecifico(ID);
}

void Biblioteca::MostrarListaFiltrada(string ToE)
{
    Coleccion.mostrarListaFiltrada(ToE);
}

void Biblioteca::MostrarCantidadLibrosEspc(string Nombre)
{
    cout<<"\n\nDel libro "<<Nombre<<" Hay un total de "<< Coleccion.cantidadNodosIguales(Nombre)<<" unidades\n\n";
}

bool Biblioteca::EliminarLibro(string ID)
{
    return Coleccion.borrar(ID);
}

bool Biblioteca::EliminarUsuario(string ID)
{
    return Usuarios.borrar(ID);
}

void Biblioteca::MostrarDisp(string titulo)
{
    Coleccion.disponibilidad(titulo);
}

void Biblioteca::MostrarEspeUsuario(string ID)
{
    Usuarios.mostrarEspecifico(ID);
}

void Biblioteca::MostarMaterias()
{
    Coleccion.mostrarMaterias();
}

Usuario *Biblioteca::TraerUsuario(string ID)
{
    return Usuarios.retornaObj(ID);
}


Biblioteca::~Biblioteca()
{
}
