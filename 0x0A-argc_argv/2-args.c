#include "main.h"

/**
 * main - function that prints its ags
 * @argc: parameter
 * @argv: parameter
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
