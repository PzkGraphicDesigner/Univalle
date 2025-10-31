#include "MatrizDeLetras.h"

MatrizDeLetras::MatrizDeLetras()
{
    tamA = 0;
    arregloDeLetras = nullptr;
}

/*m�todo que verifica que sea un tama�o v�lido, si lo es, crea
un arreglo de ese tama�o y setea al altributo tamA, y devuelve un
mensaje de exito, sino, devuelve un mensaje indicando que no se
pudo crear el arreglo*/
string MatrizDeLetras::crearArreglo(int capa)
{
    if(capa > 0)
    {
        tamA = capa;
        arregloDeLetras = new char[tamA];
        return "Se cre� el arreglo de tama�o: "+to_string(tamA)+" con exito";
    }
    return "No se pudo crear el arreglo, tama�o inv�lido";
}

/*vamos a crea numeros aleatorios entre 97 y 122 y vamos a meter ese dato
en el arreglo de char*/
string MatrizDeLetras::llenarArreglo()
{
    srand(time(NULL));
    if(tamA > 0)
    {
         for(int i = 0; i < tamA; i++)
        {
             arregloDeLetras[i] = 97 + (rand()% 26);
        }
        return "Arreglo lleno con �xito!";
    }
    else
        return "No se puede llenar el arreglo, no se ha creado!";
}

/*m�todo que elimina el arreglo de letras que es din�mico*/
void MatrizDeLetras::cerrar()
{
    delete[] arregloDeLetras;
    arregloDeLetras = nullptr;
}

/*m�todo que recorre el arreglo y los va a acumular en un
acum de tipo string y lo va a deviolver */
string MatrizDeLetras::mostrarDatos()
{
    string acum = "";
    for(int i = 0; i < tamA; i++)
    {
        acum = acum + arregloDeLetras[i] + "\t";
    }
    return acum;
}

/*m�todo que recibe un dato entero y verifica si es una posicipon
valida del arreglo, si l o es retorna true sino false*/
bool MatrizDeLetras::verificarPos(int pos)
{
    if(pos >= 0 and pos < tamA)
        return true;
    return false;
}

/*metodo que recorre el arreglo y contar la cantidad de
veces que aparece la letra que le llega como parametro
en el arreglo y lo devuelve*/
int MatrizDeLetras::cantidadVecesLetra(char letra)
{
    int cont = 0;
    for(int i = 0; i < tamA; i++)
    {
        if(arregloDeLetras[i] == letra)
        {
            cont = cont + 1;
        }
    }
    return cont;
}

/*metodo que recibe una letra e invoca al metodo cantidadVecesLetra y con el valor
que retorna crea el arreglo de dicho tama�o, despu�s recorro el arreglo de
letras y verifico si la leetra est� en el arreglo y guardo en el nuevo arreglo
la posicion.  En el caso que el metodo cantidadVecesLetra retorne 0, creamos un arreglo
de tama�o 1 y le colocamos dentro -1.  Este metodo retorna dicho arreglo */
int* MatrizDeLetras::buscarPosLetra(char letra)
{
    int veces = cantidadVecesLetra(letra);
    int *posiciones = nullptr;

    if(veces == 0)
    {
        posiciones = new int[1];
        posiciones[0] = -1;
    }
    else
    {
        posiciones = new int[veces];
        int posP = 0;
        for(int i = 0; i < tamA; i++)
        {
            if(letra == arregloDeLetras[i])
            {
                posiciones[posP] = i;
                posP++;
            }
        }
    }
    return posiciones;
}

     /*   string reemplazarLetra(int, char);

        bool verificarLetra(char);
        char devolverLetra(int);
        */

MatrizDeLetras::~MatrizDeLetras()
{
    //dtor
}
