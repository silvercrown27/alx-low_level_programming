#include "main.h"

/**
 * _isdigit - checks the code if the parameter ranges between 0 ang 9
 * @c: parameter for the function
 * Return: return 0 of false otherwise 1
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
