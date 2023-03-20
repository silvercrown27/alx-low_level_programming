#include <stdio.h>

/**
 * main - this is e main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i = -1;

	while (i < 99)
	{
		i++;

		int j = 1;

		while (j < 100)
		{
			printf("%02d", i);
			printf(" ");
			printf("%02d,", j);
			printf(" ");
			j++;
		}
	}
	return (0);
}
