#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @p: value to check the last digit
 *
 * Return: return last digit
 */
int print_last_digit(int p)
{
	unsigned int k = p;

	if (p < 0)
	{
		if (p == INT_MIN)
		{
			k = (unsigned int)(-(long)p % 10);
		}
		else
		{
			p = -p;
			k = p % 10;
		}
	}

	k = p % 10;

	_putchar('0' + k);

	return (k);
}
