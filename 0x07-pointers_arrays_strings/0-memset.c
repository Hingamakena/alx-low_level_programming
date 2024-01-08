#include "main.h"

/**
 * _memset - filles a memory area with a constant byte
 * @s: memory area
 * @b: char byte to fill the memory area in
 * @n: number of bytes to fill the memory area with
 *
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
