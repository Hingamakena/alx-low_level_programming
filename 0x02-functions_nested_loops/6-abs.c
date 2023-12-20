#include "main.h"

/**
 * _abs - compute the absoulte value of an int
 * @a: value to compute
 *
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else if (a > 0)
		return (a * 1);
}
