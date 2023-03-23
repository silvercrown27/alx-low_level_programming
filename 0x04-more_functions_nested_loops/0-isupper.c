nclude "main.h"

/**
 * _isupper - checks the code
 *
 * @c: parameter for the function
 * Return: aways 0
 */

int _isupper(int c)
{
	char upper = c;

	if (upper >= 65 && upper <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
