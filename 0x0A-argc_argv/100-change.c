#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: (0) success, (1) error
 */
int main(int argc, char *argv[])
{
	int i, value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		value = atoi(argv[1]);
	}

	if (value % 25 == 0)
	{
		printf("%d\n", value / 25);
	}

	return (0);
}
