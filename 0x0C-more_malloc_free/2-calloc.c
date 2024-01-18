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

	space = malloc(sizeof(size) * nmemb);

	if (space == NULL || size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	return (space);
}
