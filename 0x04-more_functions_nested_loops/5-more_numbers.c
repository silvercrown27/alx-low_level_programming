#include "main.h"

/**
 * more_numbers - checks the code
 *
 * Return: there is no return value for this function
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
