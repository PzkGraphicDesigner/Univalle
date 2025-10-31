#include "Principal.h"

Principal::Principal()
{
    //ctor
}
string Principal::leer(string dato)
{
    string aux;
    do
    {
        cout<<dato;
        getline(cin,aux);
    }while(aux.empty());
    return aux;
}

void Principal::menu()
{
    int opc, tam;
    char let;
    int * resBusqueda = nullptr;

    MatrizDeLetras fun = MatrizDeLetras();
    do
    {
        cout<<"**** MENU DE OPCIONES ***"
            <<"\n1 - Crear Arreglo"
            <<"\n2 - LLenar arreglo de letras aleatorias"
            <<"\n3 - Mostrar datos del arreglo"
            <<"\n7 - buscar posiciones de letra en el arreglo"
            <<"\n8 - Salir";
        opc = stoi(leer("Digite una opcion: "));
        switch(opc)
        {
            case 1: cout<<"*** CREANDO ARREGLO ***"<<endl;
                    tam = stoi(leer("Digite el tamaño del arreglo: "));
                    cout<<fun.crearArreglo(tam);
                    break;
            case 2: cout<<"*** LLENANDO ARREGLO ***"<<endl;
                    cout<<fun.llenarArreglo()<<endl;
                    break;
            case 3: cout<<"*** MOSTRANDO LOS DATOS DEL ARREGLO ***"<<endl;
                    cout<<fun.mostrarDatos();
                    break;
            case 7:cout<<"*** BUSCAR LAS POSICIONES DE UNA LETRA EN EL ARREGLO:"<<endl;
                   let = leer("Digite la letra a buscar: ")[0];
                   resBusqueda = fun.buscarPosLetra(let);
                   if(resBusqueda[0] != -1)
                   {
                       tam = fun.cantidadVecesLetra(let);
                       cout<<"Las posiciones donde está la letra: "<<let<< "son: "<<endl;
                       for(int i = 0; i < tam; i++)
                       {
                           cout<<resBusqueda[i]<<endl;
                       }
                   }
                   else
                   {
                       cout<<"La letra no está en el arreglo!"<<endl;
                   }
                   delete [] resBusqueda;
                   resBusqueda = nullptr;
                break;
            default:cout<<"Opcion inválida debe colocar un número válido del menu"<<endl;
        }

    }while(opc !=  8);
    fun.cerrar();

}
        string minusculas(string);


Principal::~Principal()
{
    //dtor
}
