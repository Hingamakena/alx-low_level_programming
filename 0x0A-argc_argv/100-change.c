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
	else if ((value % 25) == 15)
	{
		printf("%d\n", ((value / 25) + ((value % 25) / 15)));
	}
	else if ((value % 25) == 10)
	{
		printf("%d\n", ((value / 25) + ((value % 25) / 10)));
	}
	else if ((value % 25) == 5)
	{
		printf("%d\n", (value % 25) + ((value % 25) / 5));
	}
	else if ((value % 25) == 2)
	{
		printf("%d\n", (value % 25) + ((value % 25) / 2));
	}
	else
	{
		printf("so far its good, still pressing on well\n");
	}

	return (0);
}
