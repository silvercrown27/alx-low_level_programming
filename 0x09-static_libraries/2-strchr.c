#include "main.h"

/**
 * _strchr - function to locate character within a string
 * @s: string input
 * @c: character to search
 * Return: located characters
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
