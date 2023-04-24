#include "./main.h"
int _strlen(char *s);

/**
 * _strlen - Determines length of a string
 * @s: argument perceived as strings
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (!*s) /* Do not count the null byte */
			break;

		i++;
		s++;
	}
	return (i);
}

/**
 * print_reverse - print a string in reverse
 * @args: arguments of the string
 *
 * Return: The length of the string
 */

int print_reverse(va_list args)
{
	int j, len;

	char *str = va_arg(args, char *);

	len = _strlen(str);

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (len);
}
