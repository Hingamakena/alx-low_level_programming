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
	int array[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		value = atoi(argv[1]);
	}

	printf("%d\n", value);

	return (0);
}
