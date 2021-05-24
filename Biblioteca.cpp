#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
}

void Biblioteca::AgregarMort(Libro* Nuevo)
{
	Mort.agregar(Nuevo);
}

void Biblioteca::AgregarLr(Libro *Nuevo)
{
	Lr_Rings.agregar(Nuevo);
}

void Biblioteca::AgreagrCthu(Libro *Nuevo)
{
	Call_Cthu.agregar(Nuevo);
}

void Biblioteca::AgregarUsuario(Usuario *Nuevo)
{
	Usuarios.agregar(Nuevo);
}

void Biblioteca::LeerMort()
{
	Mort.mostrar();
}

void Biblioteca::LeerLr()
{
	Lr_Rings.mostrar();
}

void Biblioteca::LeerCthu()
{
	Call_Cthu.mostrar();
}

void Biblioteca::LeerUsuarios()
{
	Usuarios.mostrar();
}

void Biblioteca::EliminarMort(int ID)
{
	Mort.borrar(ID);
}

void Biblioteca::EliminarLr(int ID)
{
	Lr_Rings.borrar(ID);
}

void Biblioteca::EliminarCthu(int ID)
{
	Call_Cthu.borrar(ID);
}

void Biblioteca::EliminarUsuario(int ID)
{
	Usuarios.borrar(ID);
}

Biblioteca::~Biblioteca()
{
}
