#include "main.h"
#include <stdio.h>

/**
 * swap_int -  function swaps the values of two integers
 * @a: an inout integer pointer
 * @b: an input integer pointer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
