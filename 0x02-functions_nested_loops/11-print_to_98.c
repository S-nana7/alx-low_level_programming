#include "main.h"

/**
 * print_to_98 - Check main
 * @n: A input integer
 *
 * Description: function that prints all natural numbers frrom n to 98
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d", n);
		n++;
	}
	while (n <= 98)
	{
		printf("%d", n);
		n--;
	}
	printf("98");
	_putchar("\n");
}
