#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char estado;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese Estado Civil ");
    estado=getche("\n");

    if(edad<18 && estado!='s')
    {
        printf("\n\nMuy pequeno para NO ser soltero! \a\n");
    }//IF

    return 0;
}//MAIN
