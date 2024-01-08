#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;
	char *endptr;
	char *bgnptr;
	char temp;

	endptr = s;
	bgnptr = s;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = 0; i < (length - 1); i++)
	{
		endptr++;
	}

	length = length - 1;

	for (i = 0; i <= length / 2; i++)
	{
		temp = *bgnptr;
		*bgnptr = *endptr;
		*endptr = temp;

		bgnptr++;
		endptr--;
	}
}
