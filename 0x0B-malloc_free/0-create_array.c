#include "main.h"

/**
 * create_array - func that creates an array of chars
 * @size: the size of the memory to assign
 * @c: the address of the memory to assign
 *
 * Return: charcter or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
