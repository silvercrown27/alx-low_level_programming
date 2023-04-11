#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 *check_num - check - string digit
 *@str: array string
 *Return: 0 if successful
 */

int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))/*count string*/
	{
		if (!isdigit(str[count]))/*check if string is digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 *main - adds positive numbers
 *@argc: no of arguments
 *@argv: array of arguments
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count;
	int new_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			new_int = atoi(argv[count]);
			sum += new_int;
		}
		else
		{
			printf("Error\n");
		return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
