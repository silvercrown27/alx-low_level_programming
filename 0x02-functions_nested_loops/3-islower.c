#include "main.h"

/**
 * _islower - check code for lowercase character
 * @c: parameter to be printed
 * Return: 0 if not lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
