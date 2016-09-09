#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float num1 = 0, num2 = 0, resultado;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer valor: ");
                scanf("%f",&num1);

                break;
            case 2:
                printf("Ingrese el segundo valor: ");
                scanf("%f",&num2);

                break;
            case 3:
                resultado=sumar(num1,num2);
                printf("El resultado de la suma es: %.2f", resultado);

                break;
            case 4:
                resultado=restar(num1,num2);
                printf("El resultado de la resta es: %.2f", resultado);

                break;
            case 5:
                resultado=dividir(num1,num2);
                printf("El resultado de la division es: %.2f", resultado);

                break;
            case 6:
                resultado=multiplicar(num1,num2);
                printf("El resultado de la multiplicacion es: %.2f", resultado);

                break;
            case 7:
                resultado=factor(num1);
                printf("El resultado del factorial es: %.2f", resultado);
                break;
            case 8:
                resultado=todosLosCalculos(num1,num2);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    printf("\nDesea seguir? [s/n]\n\n");

    seguir=tolower(getche());

    printf("\n");




    }
    return 0;
}
