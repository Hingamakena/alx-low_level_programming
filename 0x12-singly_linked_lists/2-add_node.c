#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: head of the list
 * @str: string of the linked list
 *
 * Return: (0) success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	new->len = strlen(str);
	*head = new;

	return (new);
}
