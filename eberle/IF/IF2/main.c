#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("Por favor ingrese su edad: \n");
    scanf("%d", &edad);

    if(edad>=18)
    {
        printf("MAYOR DE EDAD");
    }//IF
    return 0;
}//MAIN
