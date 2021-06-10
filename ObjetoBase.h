#pragma once
#ifndef OBJETOBASE_H
#define OBJETOBASE_H

#include <iostream>

class objetoBase {

public:

    objetoBase();
    virtual ~objetoBase();
    virtual std::string toString() const = 0; // metodo virtual puro
};

#endif 