#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string input to be searched
 * @needle: string parameter to be searched for
 * Return: null or string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *needle; needle++, i++)
	{
		for (; *haystack; haystack++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
