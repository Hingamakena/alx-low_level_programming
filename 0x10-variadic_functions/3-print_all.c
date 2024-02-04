#include "variadic_functions.h"

/**
 * print_all - prints all types of data in the var func
 * @format: format of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list mylist;
	int i = 0;

	va_start(mylist, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 's')
			printf("%c ", format[i]);

		if (format[i] == 'c')
			printf("%c ", format[i]);

		if (format[i] == 'd')
			printf("%d ", format[i]);

		if (format[i] == 'f')
			printf("%c ", format[i]);
	}
	printf("\n");
}
