#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) Always success
 */
int main(void)
{
	char r = 122;

	for (; r > 96; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
