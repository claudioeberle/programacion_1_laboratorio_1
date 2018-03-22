#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("Por favor ingrese su edad: \n");
    scanf("%d", &edad);

    if(edad>17 || edad<13)
    {
        printf("NO ES ADOLESCENTE");
    }//IF



    return 0;
}//MAIN
