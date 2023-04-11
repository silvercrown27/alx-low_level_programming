#include "main.h"

/**
 * main - function that print the product of two no
 * @argc: parameter
 * @argv: parameter arguments
 * Return: 0 if success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	k = atoi(argv[2]);

	i = j * k;
	printf("%d\n", i);
	return (0);
}
