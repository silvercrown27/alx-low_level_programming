#include "main.h"
#include <stdio.h>

/**
 * strlength - return the length of the strings
 * @s: parameter for the function
 * Return: length of the string
 */

int strlength(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}

/**
 * leet - checks the code
 * @n: string input parameter
 * Return: leeted string
 */

char *leet(char *n)
{
	int i, j;
	int k = strlength(n);
	char leet0[5] = "43071";
	char leet1[5] = "AEOTL";
	char leet2[5] = "aeotl";

	for (j = 0; j < k; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (leet1[i] == n[j] || leet2[i] == n[j])
			{
				n[j] = leet0[i];
			}
		}
	}
	printf("%s", n);
	return (n);
}
