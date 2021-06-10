#pragma once
#ifndef OBJETOBASE_H
#define OBJETOBASE_H
#include <iostream>
using std::stringstream;

class objetoBase {

public:

    objetoBase();
    virtual ~objetoBase();
    virtual std::string toString() = 0; // metodo virtual puro
};

#endif 