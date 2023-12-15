#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0)
 */
int main(void)
{
	int i = 97;

	for (; i < 123; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
