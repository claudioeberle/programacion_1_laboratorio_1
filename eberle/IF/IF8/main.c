#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char estado;

    printf("Ingrese su edad: ");
    scanf("$d", &edad);

    printf("Ingrese su Estado Civil: ");
    estado=getche();

    if(edad>=18 && estado=='s')
    {
        printf("\n\nBLABLABLA!\n\n");
    }//if


    return 0;
}//main
