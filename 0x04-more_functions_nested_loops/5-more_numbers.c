#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
