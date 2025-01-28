#include <stdio.h>

enum dias {LUNES, MARTES, MIERCOLES};

// #define PI 3.14

int main(void)
{
	int i;

	char palabra = 'a';

	const float PI = 3.14;

	i = 15;

	printf("Valor entero: %d\nValor de caracter: %c\nValor float: %f\n", i, palabra, PI);

	return 0;
}

