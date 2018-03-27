#include <stdio.h>
#include <stdlib.h>


float sumar (int numero1, int numero2);
void mostrar(void);
void pedir(void);
int leer (void);
int pediryleer (int minimo, int maximo);
char pediroperador (void);
float calculo (int numero1, char operador, int numero2);

int main()
{
    int num1;
    char operador;
    int num2;
    float resultado;

    mostrar();

    num1=pediryleer(0, 100);
    operador=pediroperador();
    num2=pediryleer(0, 100);

    printf("%d", num1);
    printf("%c", operador);
    printf("%d = ", num2);



    resultado = calculo(num1, operador, num2);

    printf("%.2f", resultado);

    return 0;
}

float sumar (int numero1, int numero2)
{

    float resultado;

    resultado = numero1 + numero2;

    return resultado;

}
/** \brief
 * realiza suma de dos numero
 * \numero1 primer numero entero
 * \numero2 segundo numero entero
 * \return resultado de la suma
 *
 */


void mostrar(void)
{
    printf("Hola mundo!\n\n");
}

void pedir (void)
{
    printf("\nIngrese un número: ");
}

int leer(void)
{
    int numero;
    fflush(stdin);
    scanf("%d", &numero);
    return numero;
}

int pediryleer (int minimo, int maximo)
{
    int retorno;

    pedir();
    retorno=leer();
    while(retorno<minimo || retorno>maximo)
    {
        pedir();
        retorno=leer();
    }


    return retorno;

}

char pediroperador (void) // pide operador valido entre (+ - *  /)
{
    char operador;
    printf("\nIngrese operador: ");
    operador=getche();

    while(operador !='+' && operador !='-' && operador !='*' && operador !='/')
    {
            printf("\nIngrese operador: ");
            operador=getche();

    }

    return operador;

}




float calculo (int num1, char operador, int num2)
{
    float calculo;

    switch(operador)
    {
        case '+': calculo = num1+num2;
        break;

        case '-': calculo = num1-num2;
        break;

        case '*': calculo = num1*num2;
        break;

        case '/': calculo = (float)num1/num2;
        break;

    }

    return calculo;
}
