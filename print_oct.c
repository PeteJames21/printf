#include "main.h"

/**
* print_o - print the octal representation of an integer
* @args: va_list containing argument to be printed. The int must be >= 0
*
* Return: the number of characters printed
*/
int print_o(va_list args)
{
	unsigned int count = 0;
	unsigned int arg = va_arg(args, int);

	if (arg == 0)
	{
		_putchar('0');
		return (1);
	}

	int_to_oct(arg, &count);

	return (count);
}

/**
* int_to_oct - print the octal representation of an integer
* @n: integer to be printed
* @i: pointer to integer on which to increment number of chars printed
*/
void int_to_oct(int n, unsigned int *i)
{
	if (n == 0)
		return;

	int_to_oct(n / 8, i);

	*i += _putchar(n % 8 + 48);  /* +48 to convert into to char */
}
