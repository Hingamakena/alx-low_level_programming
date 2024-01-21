#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: string
 *
 * Return: new string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *nwstr;

	nwstr = malloc(strlen(str) + 1);

	if (nwstr == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		nwstr[i] = str[i];
	}
	return (nwstr);
}
