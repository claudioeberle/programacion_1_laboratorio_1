#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    int edad;
    int legajo;
    int nota;
    int resultado;

    edad = pedirEntero("Ingrese edad", 18, 60); // indico el rexto y el valor de min y max
    legajo = pedirEntero("Ingrese legajo", 1, 1500);
    nota = pedirEntero("Ingrese nota", 1, 10);
    //resultado = incrementar(numero);



    return 0;
}
