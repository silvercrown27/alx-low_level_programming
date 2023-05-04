#include "main.h"

/**
 * binary_to_uint - function that convert number from binary to unsigned int
 * @b: binary number
 *
 * Return: unsigned int or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = strlen(b), i;

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			num = num << 1;
		else if (b[i] == '1')
			num = (num << 1) | 1;
		else
			return (0);
	}

	return (num);
}
