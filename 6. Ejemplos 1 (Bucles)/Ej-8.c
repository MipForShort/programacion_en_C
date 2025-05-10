/***********************************************************************
 *
 * FICHERO: Ej-8.c
 *
 * CONTENIDO: Calcula c elevada a y mediante productos y debe ser entero
 *
 ***********************************************************************/

#include <stdio.h>

int main()
{
    float base; /* Datos de entrada */
    int exponente;
    int neg_exp; /* Se guarda si el exponente es negativo */
    int i; /* Contador */
    float resultado;

    printf("Base:\n");
    scanf("%f", &base);
    printf("Exponente:\n");
    scanf("%d", &exponente);

    if (base == 0 && exponente <=0)
    {
        printf("Error: Resultado indefinido\n");
        return 1;
    }

    neg_exp = (exponente < 0);

    if (neg_exp)
    {
        exponente = -exponente;
    }

    resultado = 1;

    for (i = 1; i <= exponente; i++)
    {
        resultado = resultado * base;
    }

    if (neg_exp)
    {
        resultado = 1.0 / resultado;
    }

    printf("Resultado:\n%f\n", resultado);

    return 0;
}
