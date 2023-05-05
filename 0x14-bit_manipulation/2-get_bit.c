#include "main.h"

/**
 * get_bit - function that return the bit at the certain inde
 * @n:
 * @index:
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	return (n >> index) & 1;
}
