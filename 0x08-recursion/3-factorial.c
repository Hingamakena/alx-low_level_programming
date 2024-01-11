#include "main.h"

/**
 * factorial - finds the factorial
 * @n: number
 *
 * Return: factorial or -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
