#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s12;
	int i, j;

	s12 = malloc(sizeof(s1) + sizeof(s2));

	if (s12 == NULL)
		return (NULL);

	if (s1 || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	*s12 = s1[i] + s2[j] + '\0';

	return (s12);
}
