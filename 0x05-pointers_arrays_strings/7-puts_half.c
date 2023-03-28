#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: string input
 * Return: No value
 */

void puts_half(char *str)
{
	int i, iter;

	while (*str)
	{
		i++;
	}
	i--;

	if (i % 2 == 0)
	{
		iter = i / 2;
	}
	else if (i % 2 != 0)
	{
		iter = (i - 1) / 2;
	}
	for (; iter <= i; iter++)
	{
		printf("%d", str[iter]);
	}
	printf("\n");
}
