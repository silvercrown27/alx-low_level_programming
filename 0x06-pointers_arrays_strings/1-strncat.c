#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: string parameter 1
 * @src: string parameter 2
 * @n: parameter 3
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
		k++;

	for (j = 0; j < n && j < k; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
