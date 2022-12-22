#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: an input string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	char *len = s;

	while (s[len] != '\0')
		len++;

	while (len)

		_putchar(*s);
		len--;

	_putchar('\n');
}
