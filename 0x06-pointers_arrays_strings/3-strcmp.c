#include "main.h"

/**
 * _strcmp - checks and compares the input
 * @s1: string parmeter 1
 * @s2: string parameter 2
 * Return: an integer depending on the condition satisfied
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	char l1, l2;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		l1 = s1[i];
		l2 = s2[i];
		j += l1 - l2;
	}

	return (j);
}
