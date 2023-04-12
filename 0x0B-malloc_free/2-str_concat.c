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
	int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1) + 1;
	size2 = strlen(s2) + 1;
	s = malloc(sizeof(char) * (size1 + size2 - 1));

	if (s == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';

	return (s);
}
