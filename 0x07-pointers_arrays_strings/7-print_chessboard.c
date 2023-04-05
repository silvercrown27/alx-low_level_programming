#include "main.h"

/**
 * print_chessboard - function that prints the make of a chessboard
 * @a: array input parameter containing chessboard elements
 * Return: No return value
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
