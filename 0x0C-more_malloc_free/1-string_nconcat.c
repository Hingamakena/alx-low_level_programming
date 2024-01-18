#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string 2
 * @n: number of bytes of string 2 to concatenate
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s12 = NULL;
	unsigned int i;
	unsigned int j;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; j < n || s2[j] != '\0'; j++)
		;

	s12 = malloc(sizeof(char) * i + sizeof(char) * j);

	if (s12 == NULL)
	{
		return (NULL);
	}

	return (s12);
}
