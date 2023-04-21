#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - functions that pronts strings
 * @separator: value to seperate the strings
 * @n: Number of parameters to print
 * @...: String parameters
 *
 * Return: No value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char* str = va_arg(args, const char*);

		if (str != NULL)
		{
			printf("%s", str);
			if (i + 1 != n && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("nil");
			if (i + 1 != n && separator != NULL)
				printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}
