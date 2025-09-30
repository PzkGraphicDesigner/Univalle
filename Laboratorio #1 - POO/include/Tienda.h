#ifndef TIENDA_H
#define TIENDA_H
#include "Producto.h"
#include <iostream>

using namespace std;

class Tienda
{
    private:
        Producto productolist [40];
        int cantidadActual;
    public:
        Tienda();
        bool ingresarProducto(string, double, int);
        string mostrarProducto();
        string buscarProductosEnRango(double);
        bool actualizarNombreProducto(string, string);

        virtual ~Tienda();


};
#else
Tienda.h
#endif // TIENDA_H
