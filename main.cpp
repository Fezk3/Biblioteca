#include <iostream>
#include "Control.h"

int main()
{

    Control *c = new Control;

    c->LlenaListas();
    c->MenuPrincipal();

    delete c;

    return 0;
}
