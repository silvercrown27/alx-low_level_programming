#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 *
 * Return: no return value in this code
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
