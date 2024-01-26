#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates numbers printed
 * @n: number of integers passed to the func
 *
 * Return: (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list list;
	int x;

	va_start(list, n);
	for (count = 0; count < n; count ++)
	{
		x = va_arg(list, int);
		printf("%d%s ", x, separator);
	}
	printf("\n");
	va_end(list);
}
