#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: separates the strings
 * @n: number of strings
 *
 * Return:(void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	va_list list;
	int x = 0;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		x = va_arg(list, int);
		printf("%d%s", x, separator);
	}
	va_end(list);
}
