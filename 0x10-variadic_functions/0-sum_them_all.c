#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments on the variadic function
 * @n: the first argument
 *
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int count = 0;
	va_list total;

	va_start(total, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(total, int);
	}
	va_end(total);

	return (sum);
}
