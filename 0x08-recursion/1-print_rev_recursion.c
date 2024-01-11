#include "main.h"

/**
 * _print_rev_recursion - print in reverse with recursion
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	if (i == 0)
		return;

	_print_rev_recursion(s[i] - 1);

	_putchar(s[i]);
	_putchar('\n');
}
