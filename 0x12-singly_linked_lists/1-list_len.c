#include "lists.h"

/**
 * list_len - lists the length of a linked list
 * @h: name of the list
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
