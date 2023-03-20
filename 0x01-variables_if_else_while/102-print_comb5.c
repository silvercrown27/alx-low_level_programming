#include <stdio.h>

/**
 * main - this is e main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i = 0;
	int j = 1;

	for (; i < 99; ; i++)
	{
		for (; j < 100; j++)
		{
			printf("%02d", i);
			printf(" ");
			printf("%02d,", j);
			printf(" ");
		}
	}
	return (0);
}
