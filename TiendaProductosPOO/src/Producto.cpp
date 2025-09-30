#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto()
{
    nombre = "";
    precio = 0;
    cantidad = 0;
}
/*constructor que permite crear un producto con los valores que llegan por parámetro
nombre, precio,cantidad*/
Producto::Producto(string nom,double pre,int cant)
{
    nombre = nom;
    precio = pre;
    cantidad = cant;
}
/*bool Producto::ingresarProducto(string nom,double pre,int cant);
{


}
string Producto::mostrarProductos();
{



}
string Producto::buscarProductosEnRango(double precio);
{



}
bool Producto::actualizarNombreProducto(string nom);
{


}
*/

Producto::~Producto()
{
    //dtor
}
