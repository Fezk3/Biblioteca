#pragma once
#ifndef CONTROL_H
#define CONTROL_H
#include "Biblioteca.h"
class Control
{
public:
	Control();
	virtual ~Control();
	virtual void MenuInicioS();
	virtual void MenuLibros(Usuario*);
	virtual void MenuUsuarios(Usuario *);
	virtual void MenuPrestamo(Usuario*);
	virtual void MenuPrincipal();
	virtual void SubMenu(Usuario *);
	virtual void LlenaListas();
	virtual void UsuarioNuevo(Usuario *);
	virtual void cambioEstadoUsuario(string);
	virtual bool verificaStrings(string);
private:
	Biblioteca Global;
};

#endif // !CONTROL_H