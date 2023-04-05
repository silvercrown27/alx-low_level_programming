#include "main.h"

/**
 * _pow_recursion - function that returns the power
 * od a number raised to a certain value
 * @x: integer input
 * @y: integer input
 * Return: integer raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
