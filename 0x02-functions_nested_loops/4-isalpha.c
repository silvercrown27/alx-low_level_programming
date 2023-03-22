#include "main.h"

/**
 * _isalpha  - checks for alphabetic character
 *
 * @c: parameter to the function
 * Return: i of not elphabet otherwisse 0
 */

int _isalpha(int c)
{
	char i, j;
	char letter = c;

	for (i = 'a', j = 'A'; i <= 'z' || j <= 'Z'; i++, j++)
	{
		if (letter == i || letter == j)
		{
			return (1);
		}
	}
	return (0);
}
