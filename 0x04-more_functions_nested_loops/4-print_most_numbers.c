#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 apart form 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i = 48;

	for (; i < 58; i++)
	{
		if (i ==  50 || i == 52)
			continue;

		putchar(i);
	}
	putchar('\n');
}
