/*****************************************************************
 *
 * FICHERO: Ej-5.c
 *
 * CONTENIDO: Lee caracteres y cuenta cuantos ha leido,
 *            cuantas lineas y palabras habian.
 *
 *
 *            Lo mas complicado es contar el numero de palabras,
 *            puesto que para contar lineas basta con contar
 *            el numero de saltos de linea '\n' que se lean.
 *
 *            Asi pues, distinguimom entre un caracter que forma
 *            parte de una palabra y un caracter que separa
 *            palabras. Consideramos como separadores el
 *            espacio en blanco ' ' el tabulador '\n' y el salto
 *            de linea '\n'.
 *
 *            Debemos contar una palabra SOLO cuando el caracter
 *            anterior era un separador y el actual no lo es.
 *
 *****************************************************************/

 #include <stdio.h>

 enum ESTADO {VIENDO_PALABRA, VIENDO_SEPARADOR};

 int main(void)
 {
     char car;
     enum ESTADO estado = VIENDO_SEPARADOR;

     int total_caracteres = 0;
     int total_palabras = 0;
     int total_lineas = 0;

 /********************************************************************
  * con scanf se lee un caracter: car
  *
  * Si no queda mas por leer con EOF (constante definida por stdio.h)
  * Si scanf devuelve EOF es que no se leyo nada, por ello se intenta
  * leer un caracter y si no es EOF, entro en bucle
  ********************************************************************/

     while (scanf("%c", &car) != EOF)
     {
         total_caracteres++;

         switch(car)
         {
             case '\n':
                 total_lineas++;
             case ' ':
             case '\t':
                 total_palabras++;
                 estado = VIENDO_SEPARADOR;
                 break;
             default:
                 if (estado == VIENDO_SEPARADOR)
                 {
                     total_palabras++;
                     estado = VIENDO_PALABRA;
                 }
                 break;
         }
     }

     printf("c = %d\nw = %d\nl = %d\n", total_caracteres, total_palabras, total_lineas);

     return 0;
 }
