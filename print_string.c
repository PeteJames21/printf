#include "./main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_s - Returns the length of a string
 * @args: Arguments of a string
 *
 * Return:The length of the string
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
* print_S - print a string along with non-printable chars
* @args: va_list containing string argument to be printed
*
* Description - non-printable chars are printed as \x followed by the hex code
*
* Return: length of the printed string
*/

int print_S(va_list args)
{
	int i, size = 0;
	char *s = va_arg(args, char *); /* character arguments*/

	if (!*s)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if char is non-printable */
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			size += _putchar('\\');
			size += _putchar('x');
			size += _printf("%X", s[i]);  /* Print hex form */
		}
		else
			size += _putchar(s[i]);
	}

	return (size);
}
