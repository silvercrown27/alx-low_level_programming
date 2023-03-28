#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * password_generator - Function to gemerate random valid passwords
 * Return: No return value
 */

void password_generator()
{
	int i, j;
	int password_length = 12;
	char password[password_length];
	char CHARSET[], letter;

	srand(time(NULL));
	
	for (j = 0, letter = ' '; letter < '~'; letter++, j++)
	{
		CHARSET[j] = letter;
	}
	for (i = 0; i < password_length; i++)
	{
	}
}

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
	password_generator();
	return (0);
}
