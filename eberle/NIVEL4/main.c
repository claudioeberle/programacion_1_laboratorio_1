#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char continuar='s';
    int cont=0;
    int par=0;
    int suma=0;
    float promedio;
    int minimo;
    int maximo;
    int flag=0;

    while(continuar=='s')
    {


            printf("Ingrese un número entero y positivo: ");
            scanf("%d", &numero);



            while (numero<=0)
            {
                printf("Ingrese un número mayor a 0: ");
                scanf("%d", &numero);


            }//WHILE NUMERO<=0


                if(numero%2==0)
                {
                    par++;

                }//IF PAR



                /*if(flag==0)
                {
                    maximo = numero;
                    minimo = numero;
                    flag=1;
                }//if max min
                else
                {
                    if(numero>maximo)
                    {
                        maximo=numero;
                    }//maximo

                    if(numero<minimo)
                    {
                        minimo=numero;
                    }//minimo

                }//else max min*/

            if(flag == 0 || numero > maximo)
            {
                maximo=numero;

            }//maximo

            if(flag==0 || numero < minimo)
            {
                minimo=numero;
                flag=1;
            }//minimo


            cont++;
            suma+=numero;

            printf("Para continuar ingresando números escriba s \n");
            continuar = getche();



    }//WHILE CONTINUAR

        promedio = (float)suma/cont; //CASTEO o CASTING: LE AGREGO EL FLOAT PARA DE ESA MANERA INFORMAR QUE EN ESA OPERACIÓN LA VARIABLE suma SE VA A COMPORTAR COMO FLOTANTE ERGO EL RESULTADO (promedio) VA A SER FLOTANTE.

        printf("Cantidad de números pares: %d \n", par);
        printf("El promedio es: %f \n", promedio);
        printf("La suma total es: %d \n", suma);
        printf("El máximo es: %d \n", maximo);
        printf("El m{inimo es: %d \n", minimo);


    return 0;
}
