#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print the element of an array in reverse
 * @a: the array
 * @n: total number os elements in the array
 * Return: No return value
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	for (; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
