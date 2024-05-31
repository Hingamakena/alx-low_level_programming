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
	unsigned int k;

	if (p < 0)
	{
		p = p * -1;
	}

	k = p % 10;

	_putchar('0' + k);

	return (k);
}
