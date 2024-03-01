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

	int i, j, k = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s12 = malloc((sizeof(char) * (i + 1)) + (sizeof(char) * (j + 1)));

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		s12[k] = s1[i] + s2[j];
		i++;
		j++;
		k++;
	}

	if (s12 == NULL)
		return (NULL);

	return (s12);
}
