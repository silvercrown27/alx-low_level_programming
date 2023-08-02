#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: alway 0 if program run is success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
