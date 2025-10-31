#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "MatrizDeLetras.h"
#include <iostream>
#include <cctype>

class Principal
{
    public:
        Principal();
        string leer(string);
        void menu();
        string minusculas(string);
        virtual ~Principal();
};
#else
class Principal;

#endif // PRINCIPAL_H
