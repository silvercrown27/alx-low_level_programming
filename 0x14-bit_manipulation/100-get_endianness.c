#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: No value
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	return (*ptr == 1);
}
