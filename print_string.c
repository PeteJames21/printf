#include "./main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_string - Returns the length of a string
 * @args: Arguments of a String
 *
 * Return:The length of the string
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
