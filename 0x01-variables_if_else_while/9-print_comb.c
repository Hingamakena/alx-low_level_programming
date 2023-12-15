#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) Always success
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
