#pragma once
#ifndef CONTROL_H
#define CONTROL_H
#include "Biblioteca.h"
class Control
{
public:
	void MenuInicioS();
	void MenuLibros(Usuario*);
	void MenuUsuarios(Usuario *);
	void MenuPrestamo(Usuario*);
	void MenuPrincipal();
	void SubMenu(Usuario *);
	void LlenaListas();
private:
	Biblioteca Global;
};

#endif // !CONTROL_H


