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
	int i = 0;

	new = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->str = strdup(str);
	(*new).next = *head;

	printf("[%d] %s\n", new->len, new->str);

	return (new);
}
