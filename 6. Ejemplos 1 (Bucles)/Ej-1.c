/************************************************
 *
 * FICHERO: Ej-1.c
 * CONTENIDO: Muestra todos los numeros pares entre el
 *            0 y el 100
 *            Utiliza distintos bucles
 *
 *
 * **********************************************/

#include <stdio.h>

int main()
{
    int i = 0;

    printf("Bloque while\n");
    while (i <= 100)
    {
        printf(" %d\n", i);
        i += 2;
    }

    printf("Bloque for 1\n");
    for (i = 0; i <= 100; i+=2)
    {
        printf(" %d\n", i);
    }

    printf("Bloque for 2\n");
    for (i = 0; i<= 100; i+=1)
    {
        if (i % 2 == 0)
        {
            printf(" %d\n", i);
        }
    }

    return 0;
}
