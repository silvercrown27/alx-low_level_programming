#include "main.h"
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1, size2, i;

	if (*s1 == '\0')
		size1 = 1;
	else
		size1 = strlen(s1) + 1;
	if (*s2 == '\0')
		size2 = 1;
	else
		size2 = strlen(s2) + 1;
	s = malloc(sizeof(char) * (size1 + size2));

	for (i = 0; i < ( size1 + size2 - 1); i++)
	{
		if (i < size1)
		{
			s[i] = *s1;
			s1++;
		}
		if (i >= size1)
		{
			s[i] = *s2;
			s2++;
		}
	}
	return (s);
}
