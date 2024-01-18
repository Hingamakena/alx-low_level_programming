#include "main.h"

/**
 * malloc_checked - functions allocates memory
 * @b: size of the memory allocated
 *
 * Return: memory space
 */
void *malloc_checked(unsigned int b)
{
	char *space;

	space = malloc(sizeof(b));

	if (space == NULL)
	{
		WEXITSTATUS(98);
	}
	return (space);

	free(space);
}
