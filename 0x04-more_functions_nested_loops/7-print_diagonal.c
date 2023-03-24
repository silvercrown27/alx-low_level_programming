#include "main.h"

/**
 * print_diagonal - checks the code
 * @n: parameter for the function
 * Return: there is no return value for this function
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar(' ');
}
