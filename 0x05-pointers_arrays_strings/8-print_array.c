#include "main.h"

/**
 * print_array - prints an array
 * @a: array
 * @n: number of elements in an array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
