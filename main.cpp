#include <iostream>
#include "Control.h"

int main()
{

    Control *c = new Control;

    //c->LlenaListas(); // static
    c->LlenaListaUsuario();
    c->LlenaListaLibro();
    c->MenuPrincipal();

    delete c;

    return 0;
}

/*

    Integrantes: 
                 Victor Segura Pereira
                 Kevin Montero Nu�ez

    Repositorio: 
                 https://github.com/Fezk3/Project-I

*/