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

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if (i == 99 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
