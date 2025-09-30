#include "Producto.h"

Producto::Producto()
{
    //ctor
}

/*constructor que permite crear un producto con los valores que llegan por parámetro
nombre, precio,cantidad*/
Producto::Producto(string nom,double pre,int cant)
{
    nombre = nom;
    precio = pre;
    cantidad = cant;

}





Producto::~Producto()
{
    //dtor
}
