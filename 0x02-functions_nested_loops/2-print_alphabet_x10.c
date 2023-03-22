#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times followed by a new line
 *
 * Return:There is no return value for this function
 */

void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
