#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alp = 97;
	char i = 0;

	while (i < 9)
	{
		alp = 97;
		while (alp < 123)
		{
			putchar(alp);
			alp++;
		}
		i++;
		putchar('\n');
	}
}
