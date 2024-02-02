#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: name of the list
 *
 * Return: no of elements
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	printf("[%u] %s", h->len, h->str);

	return (0);

}
