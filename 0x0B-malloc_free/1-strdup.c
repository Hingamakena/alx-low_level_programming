#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate a string
 * @str: string
 *
 * Return: new string
 */
char *_strdup(char *str)
{
	char *mem;

	int i = 0;
	int j = 0;
	int k = 0;

	for (; str[i] != '\0'; i++)
		;

	mem = malloc(sizeof(char) * i);

	while (str[j] != '\0')
	{
		mem[k] = str[j];
		j++;
		k++;
	}
	return (mem);
}
