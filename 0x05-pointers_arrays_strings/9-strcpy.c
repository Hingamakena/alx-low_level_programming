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

	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';

	_putchar('\n');

	return (dest);
}
