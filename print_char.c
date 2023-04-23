#include <stdarg.h>
#include "main.h"

/**
* print_char - print a single char
* @args: va_list containing the argument to be printed
*
* Return: the number of characters printed
*/
int print_char(va_list args)
{
	char arg = va_arg(args, int);
	int n = _putchar(arg);

	return (n);
}
