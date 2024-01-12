#include <stdio.h>

/**
 * main - Entry pooint
 * @argc: argument coung
 * @argv: arguments
 *
 * Return: (0)
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d", i);
	}
	return (0);
}
