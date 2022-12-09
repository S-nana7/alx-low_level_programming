#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry Point
 *
 * Description: prints all single digit numbers of base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");

	return (0);

}
