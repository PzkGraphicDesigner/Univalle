#ifndef MATRIZDELETRAS_H
#define MATRIZDELETRAS_H
#include <string>
#include <time.h>

using namespace std;

class MatrizDeLetras
{
    private:
        int tamA;
        char * arregloDeLetras;

    public:
        MatrizDeLetras();
        string crearArreglo(int);
        string llenarArreglo();
        string mostrarDatos();
        string reemplazarLetra(int, char);
        bool verificarPos(int);
        int cantidadVecesLetra(char);
        bool verificarLetra(char);
        char devolverLetra(int);
        int* buscarPosLetra(char);
        void cerrar();
        virtual ~MatrizDeLetras();
};
#else
class MatrizDeLetras;
#endif // MATRIZDELETRAS_H
