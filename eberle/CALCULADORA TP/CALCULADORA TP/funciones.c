

void menu(void)
{
    printf("\n1.Ingresar primer operando (A=X)\n\n2.Ingresar segundo operando (B=Y)\n\n3.Calcular la suma (A+B)\n\n4.Calcular la resta (A-B)\n\n5.Calcular la division\n\n6.Calcular la multiplicacion\n\n7.Calcular el factorial (A!)\n\n8.Calcular todas las operaciones\n\n9.Salir\n\n");
}

int opcion()
{
    int seleccion;
    printf("Elija una opcion: ");
    scanf("%d", &seleccion);

    return seleccion;
}

int pedirOperando ()
{
    int operando;
    printf("Ingrese un numero para operar");
    scanf("%d", &operando);

    return operando;
}
