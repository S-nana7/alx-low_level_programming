#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 *
 * Description: function returns 1 if the character is a letter
 * Return: 1 or 0 in otherwise
 */

int _isalpha(int c)
{
	if
	       ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}