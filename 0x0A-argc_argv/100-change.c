#include "main.h"

/**
 * main - func that print the min coins requires for change
 * @argc: int parameter
 * @argv: No of args parameter
 * Return: 0 if success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, j;

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
	j += (i % 25) / 10;
	j += (i % 25) % 10 / 5;
	j += ((i % 25) % 10) % 5 / 2;
	j += (((i % 25) % 10) % 5) % 2;
	
	printf("%d\n", j);
	return (0);
}
