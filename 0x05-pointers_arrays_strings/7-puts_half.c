#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string input
 * Return: No value
 */

void puts_half(char *str)
{
	int i, iter;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		iter = i / 2;
	}
	else
	{
		iter = (i - 1) / 2;
	}
	for (; iter < i; iter++)
	{
		_putchar(str[iter]);
	}
	_putchar('\n');
}
