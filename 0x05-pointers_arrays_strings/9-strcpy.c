#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		src[i] = dest[j];
		i++;
		j++;
	}
	dest[j] = '\0';

	_putchar('\n');

	return (dest);
}
