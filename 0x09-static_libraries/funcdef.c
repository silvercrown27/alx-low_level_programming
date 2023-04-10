#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *  _strlen_recursion - function that returns the length of a string
 *  @s: string input
 *  Return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _strstr - function that locates a substring
 * @haystack: string input to be searched
 * @needle: string parameter to be searched for
 * Return: null or string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *needle; needle++, i++)
	{
		for (; *haystack; haystack++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}

/**
 * _memset - checks the code
 * @s: array to be changed
 * @b: value to change the array
 * @n: total values to be changed
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


/**
 * _memcpy - checks the code
 * @dest: array to be changed
 * @src: change to be set
 * @n: size of change
 * Return: dest with copies mem area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[+i] = src[i];
		i++;
	}

	return (dest);
}



/**
 * _strchr - function to locate character within a string
 * @s: string input
 * @c: character to search
 * Return: located characters
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}


/**
 * _strpbrk - function that countsthe prefix of a string
 * @s: string input
 * @accept: string prefix
 * Return: an unsigned integer
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
				return (s);
		}
	}
	return ('\0');
}


/**
 * _islower - check code for lowercase character
 * @c: parameter to be printed
 * Return: 0 if not lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * _isalpha  - checks for alphabetic character
 *
 * @c: parameter to the function
 * Return: i of not elphabet otherwisse 0
 */

int _isalpha(int c)
{
	char i, j;
	char letter = c;

	for (i = 'a', j = 'A'; i <= 'z' || j <= 'Z'; i++, j++)
	{
		if (letter == i || letter == j)
		{
			return (1);
		}
	}
	return (0);
}


/**
 * _abs - return the absolute value of an integer
 * @n: parameter to return the absolute value of an integer
 * Return: always absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = -(n);
		return (n);
	}

}

/**
 * _isupper - checks the code
 *
 * @c: parameter for the function
 * Return: aways 0
 */

int _isupper(int c)
{
	char upper = c;

	if (upper >= 65 && upper <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isdigit - checks the code if the parameter ranges between 0 ang 9
 * @c: parameter for the function
 * Return: return 0 of false otherwise 1
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strlen - check the code and return the length of the string
 *@s: parameter for the function
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		len++;
	}

	return (len);
}

/**
 * _puts - check the code and print the string to the std output
 * @str: paramete for the function
 * Return: no return value
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strcpy - checks the code
 * @dest: parameter 1 for the function
 * @src: parameter 2 for the function
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

/**
* _atoi - converts a string to an integer
*
* @s: string input parameter
*
* Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
 * strlen - return the length of the strings
 * @s: parameter for the function
 * Return: length of the string
 */

int strlength(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}

/**
 * _strcat - function that concatenates strings
 * @dest: string input 1
 * @src: string input 2
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int i = strlength(dest);
	int j = strlength(src);
	
	for (k = 0; k < i + j; k++)
	{
		dest[i + k] = src[k];
	}

	return (dest);
}

/**
 * _strncpy - copy string input
 * @dest: String parameter 1
 * @src: str parameter 2
 * @n: Limit to howw much to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		j++;
	}
	for (k = 0; k < i && k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}

/**
 * _strcmp - checks and compares the input
 * @s1: string parmeter 1
 * @s2: string parameter 2
 * Return: an integer depending on the condition satisfied
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	char l1, l2;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		l1 = s1[i];
		l2 = s2[i];
		j += l1 - l2;
	}

	return (j);
}
