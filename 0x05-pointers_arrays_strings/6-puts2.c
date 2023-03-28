#include "main.h"

/**
 * puts2 - checks the code
 * @str: parameter for the function
 * return: No return Value
 */

void puts2(char *str)
{
	int i, iter;

	while (str[iter] != '\0')
	{
		iter++;
	}

	for (i = 0; i < iter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
