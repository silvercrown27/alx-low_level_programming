#include "main.h"

/**
 * _strcpy - checks the code
 * @dest: parameter 1 for the function
 * @src: parameter 2 for the function
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
