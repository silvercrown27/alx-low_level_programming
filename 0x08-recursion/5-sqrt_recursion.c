#include "main.h"

int findsqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer input paramter
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	return (findsqrt(n, i));
}

/**
 * findsqrt_recursion - recurses to find the natural square root of a number
 * @n: number
 * @i: iterator
 * Return: root
 */

int findsqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);

	return (findsqrt(n, i + 1));
}
