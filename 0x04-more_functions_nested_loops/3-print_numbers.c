#include "main.h"


/**
 * print_numbers - function that prints numbers between 1 to 10
 * Return: there is no return value for this fucntion
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
