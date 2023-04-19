#include "main.h"

/**
 * fun - function that print its parameter
 * @: input
 *
 * Return: No value
 */

void fun(char *s)
{
	printf("%s\n", s);
}


/**
 * print_name - function that print name input
 * @name: string input
 * @f: pointer to the function
 *
 * Return: No value
 */

void print_name(char *name, void (*f)(char *))
{
	f = fun;
	f(name);
}
