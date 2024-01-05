#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; src[i] < n; i++)
		;
	for (j = 0; dest[j] != '\0'; j++)
	{
		src[i] = dest[i + j];
	}
	dest[j] = '\0';

	return (dest);
}
