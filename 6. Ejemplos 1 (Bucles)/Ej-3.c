/***********************************************************************
 *
 * FICHERO: Ej-3.c
 *
 * CONTENIDO: Realiza la conversion de un entero dado (positivo)
 *            expresado en 10 a una base destino de 2 a 10.
 *
 *            El algoritmo consiste en calcular los restor de las
 *            divisiones sucesivas del numero entre la base:
 *
 *            5 en base 2, seria:
 *                5 % 2 = 1 5 / 2 = 2 (unidades = 1, prox. division 2)
 *                2 % 2 = 0 2 / 2 = 1 (unidades = 0, prox. division 1)
 *                1 % 2 = 1 1 / 2 = 0 (unidades = 1, prox. division 0)
 *
 * *********************************************************************/

 #include <stdio.h>

 int main(void)
 {
     int numero;
     int base;
     int resultado;
     int resto;
     int peso;

     printf("Numero y base: ?\n");
     scanf("%d %d", &numero, &base);

     if (base < 2 || base > 10)
     {
         printf("La base no es correcta\n");
         return 1;
     }

     peso = 1;
     resultado = 0;

     do
     {
         resto = numero % base;

         numero = numero / base;

         resultado = resultado + (resto * peso);

         peso = peso * 10;
     }
     while (numero != 0);

     printf("Resultado = %d\n", resultado);

     return 0;
 }
