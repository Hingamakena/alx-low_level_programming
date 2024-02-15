#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: value of n
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);

		if (n > 97)
			printf(",");

		n--;
	}

	if (n == 98)
	{
		printf("%d", n);
	}

	while (n < 98)
	{
		printf("%d", n);

		if (n < 98)
			printf(",");

		n++;
	}


	printf("\n");
}
