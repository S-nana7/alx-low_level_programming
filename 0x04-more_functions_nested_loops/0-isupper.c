#include "main.h"

/**
 * _isupper - check main.h
 * @c: an input character
 *
 * Description: function that checks for uppercase character
 * Return: 1 if c is uppercase 0 if otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
