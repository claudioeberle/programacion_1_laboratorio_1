#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    /*int -- float -- chat*/
    /*int=numero entero (%d) -- float=parte numerica con precision decimal (%f) -- chart= un caracter (%c) */

    /*
    int numero1;
    int numero2;

    numero1 = 8;
    numero2 = 44;

    printf("El primer número es: %d y el segundo numero es %d" , numero1, numero2);
    */

    /*int numero1;
    float numero2;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &numero2);

    printf("El primer número es: %d y el segundo número es %.2f", numero1, numero2);*/

    int numero1;
    float numero2;
    float suma;
    char letra;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &numero2);
    printf("Ingrese una letra: ");
    /*fflush(stdin); //ESTA FUNCIÓN LIMPIA EL BUFFER
    scanf("%c", &letra);
    //scanf(" %c", &letra); PONGO UN ESPACIO DELANTE DEL % -- ES UNA OPCIÓN PARA RESOLVER EL TEMA DEL BUFFER LLENO
    */

    letra = getche();
    letra = toupper(letra); // toma el dato de "(letra)", "toupper" lo convierte a MAYUSCULA, lo asigna a la variable "letra ="
    //letra = tolower(letra); -- LO CONVIERTE A MINUSCULA

    /*PUEDO SUMA FUNCIONES, POR EJEMPLO: letra = toupper(getche());*/

    suma = numero1 + numero2;

    printf("El primer numero es: %d y el segundo numero es %.2f\n", numero1, numero2);
    printf("La suma de ambos números es: %.2f\a\n", suma );
    printf("La letra ingresada es: %c", letra);

    return 0;
}
