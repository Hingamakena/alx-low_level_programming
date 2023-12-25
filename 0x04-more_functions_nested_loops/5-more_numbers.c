#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, k, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			putchar(j % 10 + '0');
		}
		for (k = 10; k < 15; k++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
		}
		putchar('\n');
	}
}
