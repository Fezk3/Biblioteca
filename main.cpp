#include <iostream>
#include "Control.h"

int main()
{

    Control *c = new Control;

    c->LlenaListaUsuario();
    c->LlenaListaLibro();
    c->MenuPrincipal();

    delete c;

    return 0;
}
