#include "main.h"

/**
 * _puts - check the code and print the string to the std output
 * @str: paramete for the function
 * Return: no return value
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
