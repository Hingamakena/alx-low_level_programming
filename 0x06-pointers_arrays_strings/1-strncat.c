#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to use
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
		;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
