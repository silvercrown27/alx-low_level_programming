#include "main.h"

/**
 * print_square - checks the code
 * @size: parameter for the function
 * Return: No return value
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
