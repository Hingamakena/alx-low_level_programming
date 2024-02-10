#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: name of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head->next);
	}
}
