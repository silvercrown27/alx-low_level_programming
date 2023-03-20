#include <stdio.h>

/**
 * main - this is e main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i;

	while (i < 99)
	{
		int j = 1;

		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i == 98 && j == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	return (0);
}
