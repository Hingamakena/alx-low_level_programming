#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int alp = 97;
	int i = 0;

	while (i < 10)
	{
		i++;
		while (alp < 123)
		{
			putchar(alp);
			alp++;
		}
	}

	putchar('\n');
}
