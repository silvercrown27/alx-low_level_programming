#include "main.h"

/**
 * _memcpy - checks the code
 * @dest: array to be changed
 * @src: change to be set
 * @n: size of change
 * Return: dest with copies mem area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[+i] = src[i];
		i++;
	}

	return (dest);
}
