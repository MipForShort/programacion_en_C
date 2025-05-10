/***********************************************************************
 *
 * FICHERO: b10aN2.c
 *
 * CONTENIDO: Realiza la conversion de un entero dado (positivo)
 *            expresado en una base entre 2 y 10 a base 10.
 *
 *            Si tenemos 123 en base 4 para pasar a base 10
 *            tendriamos que calcular
 *
 *            3 * 4^0 + 2 * 4^1 + 1 * 4^2
 *
 * *********************************************************************/

 #include <stdio.h>

 int main(void)
 {
     int numero;
     int base;
     int resultado;
     int resto;
     int potencia;
 
     printf("Numero y base: ?\n");
     scanf(" %d %d", &numero, &base);
 
     if (base < 2 || base > 10)
     {
         printf("Base incorrecta\n");
         return 1;
     }
 
     potencia = 1;
     resultado = 0;
 
     do
     {
         resto = numero % 10;
         numero = numero / 10;
 
         resultado = resultado + (resto * potencia);
 
         potencia = potencia * base;
 
     }
     while (numero != 0);
 
     printf("Resultado = %d\n", resultado);
 
     return 0;
 }