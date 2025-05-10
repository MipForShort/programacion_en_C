/***********************************************************
 * 
 * FICHERO: cifras.c
 * CONTENIDO: cuenta el numero de cifras que tiene un entero.
 * 
 * El algoritmo consiste en dividir sucesivamente por 10 el
 * numero hasta que la division de 0.
 * Se cuenta el numero de divisiones que se ha hecho y ese
 * es el numero de cifras.
 *
 * *********************************************************/

 #include <stdio.h>

 int main(void)
 {
     int numero;
 
     int divisiones;
 
     printf("Num: ?\n");
     scanf("%d", &numero);
 
     divisiones = 0;
 
     do
     {
         numero = numero / 10;
         divisiones += 1;
     } 
     while (numero != 0);
 
     printf("El numero tenia %d cifras\n", divisiones);
 
     return 0;
 }