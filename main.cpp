#include <iostream>
#include "Control.h"

int main()
{

    Control *c = new Control;

    //c->LlenaListas(); // estatic
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


*/
