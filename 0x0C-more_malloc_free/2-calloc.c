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
	unsigned int *space = NULL;

	space = malloc(sizeof(int) * size);

	if (space == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	if (nmemb == 0)
		return (NULL);


	return (space);

	free(space);
}
