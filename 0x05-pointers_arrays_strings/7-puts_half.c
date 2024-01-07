#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int half;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 1)
	{
		half = (i - 1) / 2
	}
	else
		half = i / 2;
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
