#include "main.h"

/**
 * print_square - prints square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
