#include "main.h"

/**
 * flip_bits - function that return the number of bits
 * that you would need to flip to get from one number to another
 * @n: number
 * @m: next number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += (diff & 1);
		diff >>= 1;
	}

	return (count);
}
