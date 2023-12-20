#include "main.h"

/**
 * _isalpha - checks if c is an alphabetical letter
 * @c: letter to be checked
 *
 * Return: (1) if alphabet, (0) if not
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
