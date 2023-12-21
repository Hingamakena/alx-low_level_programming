#include "main.h"

/**
 * print_line - prints a straight line
 * @n: length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n == 0)
		putchar('\n');

	for (i = 1; i < n; i++)
		putchar('_');

	putchar('\n');
}
