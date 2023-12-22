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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar(i);
			putchar(j);
		}
		putchar('\n');
	}
	putchar('\n');
}
