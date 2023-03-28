#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * password_generator - Function to gemerate random valid passwords
 * Return: No return value
 */

void password_generator(void)
{
	int i, j;
	int password_length = 20;
	char password[25];
	char CHARSET[100];
	char letter;

	srand(time(NULL));

	for (j = 0, letter = ' '; letter < '~'; letter++, j++)
	{
		CHARSET[j] = letter;
	}
	for (i = 0; i < password_length; i++)
	{
		password[i] = CHARSET[rand() % sizeof(CHARSET)];
	}
	password[password_length] = '\0';
	printf("%s", password);
	printf("\n");
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
