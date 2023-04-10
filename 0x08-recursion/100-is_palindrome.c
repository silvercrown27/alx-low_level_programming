#include "main.h"

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string input
 * Return: 1 if true otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		if (is_palindrome(s++) == is_palindrome(s--))
			return (1);
	}
	else
		return (0);

	return (0);
}
