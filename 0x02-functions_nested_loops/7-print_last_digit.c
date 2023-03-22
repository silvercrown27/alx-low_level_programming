#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n: input checked for the last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
