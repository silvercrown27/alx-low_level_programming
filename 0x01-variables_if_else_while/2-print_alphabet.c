#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
