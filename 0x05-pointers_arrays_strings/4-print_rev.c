#include "main.h"

/**
 * print_rev - check the code and print string in reverse
 * @s: parameter for the function
 * Return: No return value
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
