#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: input
 * @size: size of the array
 *
 * Return: No value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	arr = malloc(size * (nmemb - 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		arr[0] = 0;
	}
	return (arr);
}
