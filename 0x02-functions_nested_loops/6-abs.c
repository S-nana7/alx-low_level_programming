#include "main.h"

/**
 * _abs - Check main
 * @r: A number to check
 *
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
