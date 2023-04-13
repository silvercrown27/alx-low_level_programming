#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of s2 to concatenate
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = strlen(s1);
	char *str;

	str = malloc(sizeof(char) * (n + j + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; *s1; s1++, i++)
		str[i] = *s1;

	for (; i < (j + n) && *s2; s2++, i++)
		str[i] = *s2;
	str[i] = '\0';

	return (str);
}
