#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (i < src[i])
	{
		src[i] = dest[i + j];
		i++;
	}
	dest[j] = '\0';
}
