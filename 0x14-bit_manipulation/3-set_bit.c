#include "main.h"

/**
 * set_bit - function that shifts a bit at a given index
 * @n: long int input
 * @index: index of rhe number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
