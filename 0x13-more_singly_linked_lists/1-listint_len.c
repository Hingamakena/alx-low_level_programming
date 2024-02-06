#include "lists.h"

/**
 * listint_len - prints the length of the list
 * @h: name of the list
 *
 * Return:(0) success
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
