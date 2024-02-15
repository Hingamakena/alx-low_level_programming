#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: The determinant of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;
	int p;

	if (n > 15)
	{

	}
	else if (n < 0)
	{

	}
	else
	{
		while (i <= n)
		{
		int j = 0;

		while (j <= n)
		{
			p = i * j;

			if (p > 99)
				_putchar('0' + (p / 100));

			if (p > 9)
				_putchar('0' + (p / 10));

			_putchar('0' + (p % 10));
			_putchar(',');

			j++;
		}
		i++;
		_putchar('\n');
		}
	}
}
