#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; src[i] != '\0'; i++)
		;
	for (; dest[j] != '\0'; j++)
	{
		src[i] = dest[i + j];
	}
	dest[j] = '\0';
}
