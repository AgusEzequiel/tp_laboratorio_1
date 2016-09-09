#include "funciones.h"


/**
* \brief Recibe dos numeros flotantes y los suma
* \param val1 primer numero recibido
* \param val2 segundo numero recibido
* \return La suma de los flotantes
*
*/
float sumar (float val1, float val2)
{
    float resultado;
    resultado=val1+val2;
    return resultado;

}

/**
* \brief Recibe dos numeros flotantes y los resta
* \param val1 primer numero recibido
* \param val2 segundo numero recibido
* \return La resta de los flotantes
*
*/

float restar (float val1, float val2)
{
    float resultado;
    resultado=val1-val2;
    return resultado;
}

/**
* \brief Recibe dos numeros flotantes y los divide. Corrobora el caso de división por cero.
* \param val1 primer numero recibido
* \param val2 segundo numero recibido
* \return La división de los flotantes
*
*/

float dividir (float val1, float val2)
{
    float resultado;

    if (val2==0)
    {
         printf("ERROR. No se puede dividir por 0\n");
         return resultado=0;

    }
    resultado=val1/val2;
    return resultado;
}

/**
* \brief Recibe dos numeros flotantes y los multiplica
* \param val1 primer numero recibido
* \param val2 segundo numero recibido
* \return La multiplicacion de los flotantes
*
*/

float multiplicar (float val1, float val2)
{
    float resultado;
    resultado=val1*val2;

    if (resultado==-0)
    {
        return 0;
    }
    return resultado;

}

/**
* \brief Recibe un numero y lo factorea. Corrobora el caso de los numeros negativos
* \param val1 el numero recibido
* \return El factorial del numero recibido
*
*/

float factor (float val1)
{
    float resultado;

    if(val1<0)
    {
        printf("ERROR. No existe factorial de un numero negativo\n");
        return resultado=0;
    }
    if(val1==0)
    {
        return 1;
    }
    else
    {
        resultado=val1*factor(val1-1);
        return resultado;
    }
}

/**
* \brief Recibe dos numeros flotantes y llama a todas las operaciones anteriores
* \param val1 primer digito recibido
* \param val2 segundo digito recibido
* \return El resultado de todas las funciones
*
*/

float todosLosCalculos (float val1, float val2)
{
    float resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision, resultadoFactorial;

    resultadoSuma=sumar(val1,val2);
    printf("El resultado de la suma es: %.2f\n", resultadoSuma);

    resultadoResta=restar(val1,val2);
    printf("El resultado de la resta es: %.2f\n", resultadoResta);

    resultadoMultiplicacion=multiplicar(val1,val2);
    printf("El resultado de la multiplicacion es: %.2f\n", resultadoMultiplicacion);

    resultadoDivision=dividir(val1,val2);
    printf("El resultado de la division es: %.2f\n", resultadoDivision);

    resultadoFactorial=factor(val1);
    printf("El resultado del factorial es: %.2f\n", resultadoFactorial);
}



