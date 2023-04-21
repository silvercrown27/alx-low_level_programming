#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - functions that prints numbers
 * @separator: value that is used to seperate the numbers
 * @n: NUmber of numbers
 * @...: input numbers
 *
 * Return: No value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 != n)
			printf("%s ", separator);
	}
	printf("\n");
}
