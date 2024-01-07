#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	j = i + 1;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (j > 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
