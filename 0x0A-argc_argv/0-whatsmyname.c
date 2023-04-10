#include "main.h"

/**
 *main - program that prints its name
 *@argc: no of arguments
 *@argv: array of arguments
 *Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
