#include "main.h"

int _strlen(char *str);
/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *s12;

	s12 = malloc(sizeof(char) * _strlen(s1) +
			sizeof(char) * (_strlen(s2) + 1));

	if (s12 == NULL)
		return (NULL);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s12[i] = s1[j];
		i++;
		j++;
	}

	while (s2[j] != '\0')
	{
		s12[i + j] = s2[k];
		i++;
		j++;
		k++;
	}
	return (s12);
}

/**
 * _strlen - finds the length of a sting
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		;

	return (i);
}
