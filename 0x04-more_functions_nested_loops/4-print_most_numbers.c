#include "main.h"

/**
 * print_most_numbers - checks the code and prints numbers between 0 and 10
 * Return: there is no return value for this function
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
}
