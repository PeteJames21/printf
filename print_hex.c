#include "main.h"

/**
* print_x - print the hex representation of an integer in lowercase
* @args: va_list containing argument to be printed. The int must be >= 0
*
* Return: the number of characters printed
*/
int print_x(va_list args)
{
	int i = 0;
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 16)
		i += _putchar('0');

	int_to_hex(n, &i, 0);

	return (i);
}

/**
* print_X - print the hex representation of an integer in uppercase
* @args: va_list containing argument to be printed. The int must be >= 0
*
* Return: the number of characters printed
*/
int print_X(va_list args)
{
	int i = 0;
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 16)
		i += _putchar('0');

	int_to_hex(n, &i, 1);

	return (i);
}

/**
* int_to_hex - print the hex representation of an integer in uppercase
* @n: integer to be printed
* @i: pointer to integer on which to increment number of chars printed
* @uppercase: whether to print in uppercase (1) or lowercase (0)
*/
void int_to_hex(unsigned int n, int *i, int uppercase)
{
	unsigned int rem, offset;

	offset = uppercase ? 55 : 87;

	if (n == 0)
	{
		return;
	}

	rem = n % 16;

	/* Convert int to char */
	if (rem < 10)
		rem += 48;
	else
		rem += offset;

	int_to_hex(n / 16, i, uppercase);

	*i += _putchar(rem);
}
