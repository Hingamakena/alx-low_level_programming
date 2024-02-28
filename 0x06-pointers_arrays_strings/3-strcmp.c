#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0;

	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
			return (0);
		else
			return (1);
	}

	return (d);
}
