#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: (0) Always success
 */
void print_alphabet(void)
{
	int i = 97;

	for (; i < 123; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
