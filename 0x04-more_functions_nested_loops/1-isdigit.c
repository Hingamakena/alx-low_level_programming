#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: digit to check
 *
 * Return:(1) of (0)
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
