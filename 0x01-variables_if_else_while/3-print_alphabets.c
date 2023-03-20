#include <stdio.h>

/**
 * main - this is the main function
 *
 * return: 0 on success
 */

int main(void)
{
	char letter = 'a';
	char let = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (let <= 'Z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
