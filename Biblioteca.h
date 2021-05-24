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
	void AgregarMort(Libro *);
	void AgregarLr(Libro *);
	void AgreagrCthu(Libro *);
	void AgregarUsuario(Usuario *);
	void LeerMort();
	void LeerLr();
	void LeerCthu();
	void LeerUsuarios();
	void EliminarMort(int);
	void EliminarLr(int);
	void EliminarCthu(int);
	void EliminarUsuario(int);
	~Biblioteca();

private:
	Lista<Libro> Mort;
	Lista<Libro> Lr_Rings;//Lord of The Rings
	Lista<Libro> Call_Cthu; //The Call of Cthulhu
	Lista<Usuario> Usuarios;//Los administradores o bibliotecarios
};
#endif // !BIBLIOTECA_H



