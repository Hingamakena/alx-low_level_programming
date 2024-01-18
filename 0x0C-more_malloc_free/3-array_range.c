#include "main.h"

/**
 * array_range:-  creates an array of integers
 * @min: min number of integers
 * @max: max number of integers
 *
 * Return: pointer to newly allocated memory
 */
int *array_range(int min, int max)
{
	int count;
	int *array;

	if (min > max)
		return (NULL);

	count = max - min;

	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	free(array);

	return (array);
}
