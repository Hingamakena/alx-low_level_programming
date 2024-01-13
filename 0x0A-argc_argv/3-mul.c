#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arcument count
 * @argv: arguments
 *
 * Return: (0)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
