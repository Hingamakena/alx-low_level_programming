#include "main.h"

/**
 * print_sign - returns the sign of the number
 * @n: the argument
 *
 * Return: (success)
 */
int print_sign(int n)
{
	int k = 0;

	if (n < 0)
	{
		_putchar('-');
		k = -1;
	}
	if (n == 0)
	{
		_putchar('0');
		k = 0;
	}
	if (n > 0)
	{
		_putchar('+');
		k = 1;
	}
	return (k);
}
