#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) Always success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	return (0);
}
