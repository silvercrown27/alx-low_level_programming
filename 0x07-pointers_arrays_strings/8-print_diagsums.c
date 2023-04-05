#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that that displays the
 * sum of two diagonals of a square matrix of integers
 * @a: square matrix
 * @size: size of square
 * Return: No return value
 */

void print_diagsums(int *a, int size)
{
	int s1, s2, i;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
