#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
