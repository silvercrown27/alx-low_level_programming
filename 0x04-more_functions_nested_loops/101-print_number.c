#include "main.h"

/**
 * print_number - checks the code
 * @n: parameter for the function
 * Return: no return value for this function
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -(n);
	}

	if (n / 10)
	{
	print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
