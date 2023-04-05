#include "main.h"

/**
 * set_string - function that converts a pointer to string
 * @a: pointer input parameter
 * @to: pointer paramter
 * Return: No value
 */

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; **s; i++, s++)
	{
		to[i] = *s[i];
	}
	to[i] = '\0';
}
