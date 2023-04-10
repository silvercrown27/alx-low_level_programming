#include "main.h"

/**
 * strlen - return the length of the strings
 * @s: parameter for the function
 * Return: length of the string
 */

int strlength(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}

/**
 * _strcat - function that concatenates strings
 * @dest: string input 1
 * @src: string input 2
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int i = strlength(dest);
	int j = strlength(src);
	
	for (k = 0; k < i + j; k++)
	{
		dest[i + k] = src[k];
	}

	return (dest);
}
