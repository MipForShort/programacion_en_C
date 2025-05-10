/****************************************************************
 *
 * FICHERO: Ej-7.c
 *
 * CONTENIDO: Divide dos enteros mediante restas sucesivas
 *
 * **************************************************************/

#include <stdio.h>

int main()
{
    int dividendo; /* Datos de entrada */
    int divisor;
    int cociente; /* Resultados */
    int resto;
    int signo_cociente_positivo;
    int signo_resto_positivo;

    cociente = 0;
    resto = 0;

    printf("Dividendo y divisor?\n");
    scanf("%d %d", &dividendo, &divisor);

    /* Validamos que divisor no sea 0 */
    if (divisor == 0)
    {
        printf("El divisor es 0\n");
        return 1;
    }

    /*-----------------------------------------------------
     * Calculo el signo cociente sera positivo cuando
     * dividendo y divisor sean ambos positivos o negativos
     ------------------------------------------------------*/

    signo_cociente_positivo = ((dividendo >= 0) && (divisor >= 0)) || ((dividendo < 0) && (divisor < 0));

    /*----------------------------------------------------------
     * Calculo signo del resto. Tendra el mismo que el dividendo
     -----------------------------------------------------------*/

    signo_resto_positivo = (dividendo >= 0);

    /*---------------------------------------
     * Pasamos a positivo dividendo y divisor
     ----------------------------------------*/

    if (dividendo < 0)
    {
        dividendo = -dividendo;
    }

    if (divisor < 0)
    {
        divisor = -divisor;
    }

    /*--------
     * Calculo
     --------*/

    while (dividendo >= divisor)
    {
        dividendo = dividendo - divisor;
        cociente++;
    }

    resto = dividendo;

    /*---------------------------------------
     * Colocamos los signos de forma correcta
     ----------------------------------------*/

    if (!signo_cociente_positivo)
    {
        cociente = -cociente;
    }

    if (!signo_resto_positivo)
    {
        resto = -resto;
    }

    printf("Cociente:\n%d\nResto:\n%d\n", cociente, resto);

    return 0;
}
