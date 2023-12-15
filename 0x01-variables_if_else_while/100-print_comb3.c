#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0)Always success
 */
int main(void)
{
	int i = 0;

	for (; i < 100; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(',');
	}
	return (0);
}
