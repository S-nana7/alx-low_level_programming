#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number from n to 98
 * @n: the number to start counting from n to 98
 *
 * Description: function that prints all natural numbers from n to 98
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
		
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

		if (n == 98)
			continue;
		printf(", ");
		}
	printf("\n");
	}
}
