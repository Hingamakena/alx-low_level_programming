#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0)Always success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j)
				continue;
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if (i == 9 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
