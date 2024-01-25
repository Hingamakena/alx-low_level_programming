#include "main.h"

/**
 * _strspn - return the number of bytes in a segment
 * @s: segment
 * @accept: the number of bytes
 *
 * Return: count of the bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;

	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				count += 1;
		}
		i++;
	}
	return (count);
}
