#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: string input
 * Return: Formatted string
 */

char *string_toupper(char *s)
{
	int i;
	char letter1;
	char letter2;

	for (letter1 = 'a', letter2 = 'A'; letter1 <= 'z'; letter1++, letter2++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == letter1)
			{
				s[i] = letter2;
			}
		}
	}
	return (s);
}
