#include "main.h"

/**
 * _strpbrk - function that countsthe prefix of a string
 * @s: string input
 * @accept: string prefix
 * Return: an unsigned integer
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
				return (s);
		}
	}
	return ('\0');
}
