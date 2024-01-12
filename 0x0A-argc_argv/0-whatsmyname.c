#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: (0)
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
