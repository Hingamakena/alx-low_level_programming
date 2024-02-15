#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int p;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			p = i * j;
			_putchar('0' + (p / 10));
			_putchar('0' + (p % 10));
			_putchar(' ');
			j++;
		}
		i++;
		printf("\n");
	}
}
