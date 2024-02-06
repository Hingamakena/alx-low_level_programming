#include "lists.h"

/**
 * print_listint - prints the elements of the list
 * @h: name of the list
 *
 * Return:(0) success
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
