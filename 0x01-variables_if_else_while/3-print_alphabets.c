#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0)
 */
int main(void)
{
	int i = 97;
	int j = 65;

	for (; i < 123; i++)
		putchar(i);

	for (; j < 91; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
