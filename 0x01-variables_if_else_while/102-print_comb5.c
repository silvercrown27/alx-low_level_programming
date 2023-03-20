#include <stdio.h>

/**
 * main - this is e main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i = 0;
	int iter = 0;

	while (i < 99)
	{
		int j = 1;

		j += iter;

		while (j < 100)
		{
			printf("%02d", i);
			printf(" ");
			printf("%02d,", j);
			if (i == 98 && j == 99)
			{
				break;
			}
			printf(" ");
			j++;
		}
		iter += 1;
		i++;
	}
	return (0);
}
