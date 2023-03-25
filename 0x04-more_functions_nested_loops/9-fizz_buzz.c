#include "main.h"
#include <stdio.h>

/**
 * my_chars - checks the code
 * @var: parameter for the code
 * Return: no value
 */

void my_chars(long var)
{
	if (var / 10)
	{
		my_chars(var / 10);
	}
	putchar(var % 10 + '0');
}

/**
 * FizzBuzz - checks the code
 * Return: no value
 */

void FizzBuzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else
		{
			my_chars(i);
		}
		putchar(' ');
	}
}

/**
 * main - this is the main function
 * Return: always 0
 */

int main(void)
{
	FizzBuzz();
	return (0);
}
