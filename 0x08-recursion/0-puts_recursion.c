#include "main.h"

/**
 * _puts_recursion - prints a string via recursion
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	_puts_recursion(s[i] + 1);
}
