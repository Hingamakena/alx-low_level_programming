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
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	return (0);
}
