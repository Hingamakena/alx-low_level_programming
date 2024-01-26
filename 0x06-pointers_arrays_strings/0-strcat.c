#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[i + j] = src[i];
	}

	dest = '\0';
	return (dest);
}
