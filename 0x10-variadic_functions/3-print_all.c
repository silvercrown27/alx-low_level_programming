#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @s:
 * @format:
 *
 * Return: No value
 */

void print_all(const char* const format, ...)
{
	va_list args;
	const char* p = format;

	va_start(args, format);

	for (; *p; p++)
	{
		if (*p == 'c')
		{
			char c = va_arg(args, int);
			printf("%c", c);
		}
		else if (*p == 'i')
		{
			int i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*p == 'f')
		{
			double f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*p == 's')
		{
			char *s = va_arg(args, char*);
			if (s == NULL)
				printf("nil");
			else
				printf("%s", s);
		}
		else
		{
			continue;
		}
		if (*(p + 1))
			printf(", ");
	}
	printf("\n");
}
