#include "lists.h"

/**
 * print_list - prints elements of a singly linked list
 * @h: name of the list
 *
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
