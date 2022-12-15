#include "main.h"

/**
 * _isupper - Check main.h
 * @c: an input character
 *
 * Description: function that checks for uppercase character
 * Return: 1 if c is uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
