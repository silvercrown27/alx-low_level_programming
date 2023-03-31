#include "main.h"

/**
 * strupper - convert a character to uppercase
 * @s: character input
 * Return: Formatted character
 */

char strupper(char s)
{
	int i;
	char letter1 = 'A';
	char letter2 = 'a';

	for (i = 0, letter2 = 'a'; letter2 <= 'z'; letter2++, i++)
	{
		if (s == letter2)
		{
			s = letter1 + i;
		}
	}
	return (s);
}

/**
 * cap_string - function that capitalizes a string
 * @s: string input
 * Return: formatted string
 */

char *cap_string(char *s)
{
	int i, j;
	char seps[] = ",;. !?\"(){}\n\t";

	s[0] = strupper(s[0]);

	for (j = 0; seps[j] != '\0'; j++)
	{
		for (i = 0; s[i + 1] != '\0'; i++)
		{
			if (seps[j] == s[i])
			{
				s[i + 1] = strupper(s[i + 1]);
				if (seps[j] == '\t')
					s[i] = ' ';
			}
		}
	}

	return (s);
}
