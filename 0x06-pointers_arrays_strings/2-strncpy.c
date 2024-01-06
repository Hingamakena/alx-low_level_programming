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
	int i;

	for (i = 0; src[i] < n; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = '\0';

	return (dest);
}
