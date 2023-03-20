#include <stdio/h>

/**
 * main -this is the main function of the program
 *
 * Return: 0 if run is success
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
