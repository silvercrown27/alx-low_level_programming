#include "main.h"

/**
 * print_binary - function that converts a number to its binary equivilant
 * @n: input
 *
 * Return: No value
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		if (n == 1)
		{
			putchar(n + '0');
			return;
		}

		print_binary(n >> 1);
		putchar((n & 1) ? '1' : '0');
	}
	if (n == 0)
		putchar(n + '0');
}
