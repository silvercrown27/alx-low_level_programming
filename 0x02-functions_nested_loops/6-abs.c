#include "main.h"

/**
 * _abs - return the absolute value of an integer
 * @n: parameter to return the absolute value of an integer
 * Return: always absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = -(n);
		return (n);
	}

}
