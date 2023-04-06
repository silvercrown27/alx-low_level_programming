#include "main.h"

int recursive_prime(int n, int j);

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 * @n: input parameter
 * Return: 1 or zero
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (recursive_prime(n, 2));
}

/**
 * recursive_prime - recursve call to check code
 * @n: number to be checked
 * @j: iteration
 * Return: 1 otherwise 0
 */

int recursive_prime(int n, int j)
{
	if (n % j == 0)
		return (0);
	else
		return (1);

	return (recursive_prime(n, j + 1));
}
