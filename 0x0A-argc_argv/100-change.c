#include "main.h"

/**
 * main - func that print the min coins requires for change
 * @argc: int parameter
 * @argv: No of args parameter
 * Return: 0 if success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, j, k, l;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[argc - 1]);

	if (i < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	j = i / 25;
	k = (i % 25) / 10;
	l = (i % 25) % 10 + k + j;
	printf("%d\n", l);
	return (0);
}
