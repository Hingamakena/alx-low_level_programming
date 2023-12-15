#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: (1) Error
 */
int main(void)
{
	int i;
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);

	putchar('\n');

	return (1);
}
