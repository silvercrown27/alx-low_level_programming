#include "main.h"


/**
 * _strncpy - copy string input
 * @dest: String parameter 1
 * @src: str parameter 2
 * @n: Limit to howw much to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		j++;
	}
	for (k = 0; k < i && k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
