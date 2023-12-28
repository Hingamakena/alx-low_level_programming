#include "main.h"

/**
 * print_last_digit - prints last digit
 * @p: value to check the last digit
 *
 * Return: return last digit
 */
int print_last_digit(int p)
{
	char last;

	if (p < 0)
	{
		p = p * -1;
	}
	else if (p == 0)
	{
		p = p * 0;
	}
	else
	{
		p = p * 1;
	}

	last = p % 10;

	putchar(last + '0');
	putchar ('\n');

	return (last);
}
