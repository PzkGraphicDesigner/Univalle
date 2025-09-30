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
        bool ingresarProducto(string,double,int);
        string mostrarProductos();
        string buscarProductosEnRango(double);
        bool actualizarNombreProducto(string);
        virtual ~Producto();
};
#else
class Producto;
#endif // PRODUCTO_H
