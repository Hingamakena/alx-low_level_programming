#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: letter to be checked
 *
 * Return: 1 if lowercase, (0) if else
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
