#include "main.h"

/**
 * _memset - checks the code
 * @s: array to be changed
 * @b: value to change the array
 * @n: total values to be changed
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
