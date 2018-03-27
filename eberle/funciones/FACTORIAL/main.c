#include <stdio.h>
#include <stdlib.h>
int factorial (int);

int main()
{


   /* int numero;
    int temp;
    int factorial;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    temp=numero--;

    while(temp>=1)
    {
        factorial=numero*temp;
        temp--;
    }

    printf("\nEl resultado es: %d", factorial);
*/

/*    int valor=5;
    int factorial;

    for(int i=valor; i >= 1; i--)
    {

        factorial=factorial*i;

    }

    printf("El factorial es de %d es: %d", valor, factorial);*/



    return 0;
}

int factorial(int numero)
{

    int retorno;
    if(numero==0)
    {
        retorno=1;
    }
    else
    {
        retorno = numero* factorial(numero-1);
    }
    return retorno;

}
