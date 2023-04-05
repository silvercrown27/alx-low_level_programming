#include "main.h"

/**
 * _strspn - function that countsthe prefix of a string
 * @s: string input
 * @accept: string prefix
 * Return: an unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j, k;

	i = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (i);
		}
	}
	return (i);
}
