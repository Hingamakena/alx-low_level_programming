#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j = 1;

	for (; i < 11; i++)
	{
		for (; j < 15; j++)
		{
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
