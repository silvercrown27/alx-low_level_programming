#include "main.h"

/**
 * _strlen - check the code and return the length of the string
 *@s: parameter for the function
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len++;
	}

	return (len);
}
