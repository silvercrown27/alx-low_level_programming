#include "variadic_functions.h"
#include <stdarg.h>

/** sum_them_al - functions that sums up all its parameters
 * @n: Number of parameters to sum
 * @...: parameters to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum;

	sum = 0;
	va_start(args, n);
	if (n == 0)
		return 0;

	for (i = 0; i < n; i++) {
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}
