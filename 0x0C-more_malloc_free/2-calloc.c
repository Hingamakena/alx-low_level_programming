#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: size of array
 * @size: size of elements
 *
 * Return: meory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;

	unsigned int *space = NULL;

	space = malloc(sizeof(size) * nmemb);

	if (space == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	if (nmemb == 0)
		return (NULL);

	for (; i < size; i++)
	{
		space[i] = nmemb;
		i++;
	}

	return (space);

	free(space);
}
