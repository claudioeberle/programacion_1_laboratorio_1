#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int seleccion;

    menu();
    seleccion=opcion(seleccion);

    if(seleccion==1)
    {
        operandoA=pedirOperando();
    }


    return 0;
}

