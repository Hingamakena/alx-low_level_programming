#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	if (dest != NULL)
	{
		return (0);
	}

	while (src[i] < n)
	{
		src[i] = dest[j];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
