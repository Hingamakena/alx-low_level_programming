#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:(0) Always success
 */
int main(void)
{
	char i = 48;
	char j = 97;

	for (; i < 58; i++)
		putchar(i);
	for (; j < 103; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
