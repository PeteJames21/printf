#include <stdarg.h>
#include "main.h"

/**
* _printf - format and print data
* @format: format string to use in printing
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int n = 0;  /* Number of characters printed */
	int i;  /* For looping through the format string */
	char next_char;
	int (*func) (va_list);
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0; *format; format++)
	{
		if (*format != '%')
			n += _putchar(*format);
		else
		{
			/* Inspect the next char to figure out the specifier */
			/* If the next char is another %, print it */
			next_char = format[i + 1];
			if (next_char == '%')
			{
				n += _putchar(next_char);
				format++;
			}
			else
			{
				/* Get function for handling the specifier */
				func = get_func(next_char);
				if (!func)
				{
				/* incorrect specifier has been used*/
					;
				}
				else
				{
					/* `func` will get the next arg and print it */
					n += func(args);
					format++;
				}
			}
		}
	}

	return (n);
}
