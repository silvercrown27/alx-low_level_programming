#include "main.h"

/**
 * Function that creates an array of integers
 * @min: minimum no. of values
 * @max: maximum no. of values
 *
 * Return: alway 0 otherwise NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
