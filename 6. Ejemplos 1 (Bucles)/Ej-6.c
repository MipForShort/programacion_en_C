/**************************************************************
 *
 * FICHERO: producto.c
 *
 * CONTENIDO: multiplica dos enteros mediante sumas repetidas
 *
 **************************************************************/

 #include <stdio.h>

 int main(void)
 {
     int n1;
     int n2;
     int signo_positivo;
     int producto;
     int i;
 
     printf("Escribe los numeros a multiplicar:\n");
     scanf("%d %d", &n1, &n2);
 
     signo_positivo = ((n1 >= 0) && (n2 >= 0)) || ((n1 < 0) && (n2 < 0));
 
     if (((n1 >= 0) && (n2 >= 0)) || ((n1 < 0) && (n2 < 0)))
     {
         signo_positivo = 1;
     }
 
     else
     {
         signo_positivo = 0;
     }
 
     if (n1 < 0)
     {
         n1 = -n1;
     }
     if (n2 < 0)
     {
         n2 = -n2;
     }
 
     producto = 0;
 
     for (i = 1; i <= n1; i++)
     {
         producto = producto + n2;
     }
 
     if (!signo_positivo)
     {
         producto = -producto;
     }
 
     printf("Resultado: = %d\n", producto);
 
     return 0;
 }