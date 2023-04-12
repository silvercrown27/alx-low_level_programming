#include "main.h"
#include <string.h>

/**
 * _strdup - func that return a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: copied string pointer (s)
 */

char *_strdup(char *str)
{
	char *s;
	int size, i;

	size = strlen(str) + 1;
	s = malloc(sizeof(char) * size);
	if (str == NULL || size <= 0)
		return (NULL);

	for (i = 0; *str != '\0' && i < size; i++, str++)
	{
		s[i] = *str;
	}
	return (s);
}
