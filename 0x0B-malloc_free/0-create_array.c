#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to fill in space
 */
char *create_array(unsigned int size, char c)
{
	char *space;
	unsigned int i;

	space = malloc(sizeof(char) * size);

	if (space == NULL)
		return (0);

	if (size == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		space[i] = c;
	}
	return (space);
}
