#include "main.h"

/**
 * rev_string - check the code and print string in reverse
 * @s: parameter for the function
 * Return: No return value
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i ; i--, j++)
	{
		s[j] = s[i];
	}
}
