#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	_strlen_recursion(s + 1);
	i++;

	return (i);
}
