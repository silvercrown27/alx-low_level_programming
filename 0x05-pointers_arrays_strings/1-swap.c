#include "main.h"

/**
 * swap_int - Swap the values of two pinters with each other
 * @a: parameter 1
 * @b: parameter 2
 * Return: no value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
