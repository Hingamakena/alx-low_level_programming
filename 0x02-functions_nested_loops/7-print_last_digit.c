#include "main.h"

/**
 * print_last_digit - prints last digit
 * @p: value to check the last digit
 *
 * Return: return last digit
 */
int print_last_digit(int p)
{
	int l;

	if (p < 0)
		p = p * -1;

	l = p % 10;

	_putchar(l);
	return (0);
}
