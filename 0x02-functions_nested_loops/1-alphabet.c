#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: 'print alphabet in lowercase'
 * Returns: Always 0 (Success)
 */

/*prints lowercase alphabet*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
