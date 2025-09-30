#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto
{
    private:
    string nombre;
    double precio;
    int cantidad;

    public:
        Producto();
        Producto(string, double, int);
        string getNombre();
        double getPrecio();
        int getCantidadd();
        void setNombre();
        virtual ~Producto();


};
#else
Producto.h
#endif // PRODUCTO_H
