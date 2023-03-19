#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main function
 *
 * printf: dispay content
 * Return: always 0 upon success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES HEAR */

	if (n < 0)
	{
		printf("%d is negative\n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is positive\n");
	return (0);
}
