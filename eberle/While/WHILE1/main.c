#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contador=10;

    printf("\n  ");

   while ( contador > 0 )        /* Condición */
   {
      printf( "%d ", contador );   /* Salida */
      contador--;    /* Incremento del contador */
   }

   return 0;
}
