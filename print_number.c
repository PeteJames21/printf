#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
* print_d - print a base 10 integer
* @args: va_list containing argument to be printed
*
* Description - the integer is first converted to a sring before it is printed
*
* Return: the number of characters printed
*/
int print_d(va_list args)
{
	int n = va_arg(args, int);
	int i, size, rem, quotient;
	char *n_string;

	/* Determine the no. of chars to be printed (includes any -ve sign) */
	size = count_chars(n);
	/* For holding the string representation of n */
	n_string = malloc(size + 1);  /* +1 for null byte */

	if (!n_string)
	{
		_printf("An error occured while allocating memory");
		exit(1);
	}

	if (n < 1)
	{
		/* Append the negative sign and convert n to a positive int */
		n_string[0] = '-';
		n = -1 * n;
	}

	i = size - 1;  /* For looping through n_string */

	do {
		quotient = n / 10;
		rem = n % 10;
		n = quotient;

		n_string[i] = rem + 48;  /* Add 48 to convert int to char */
		i -= 1;

	} while (quotient);

	n_string[size] = '\0'; /* Add null byte to string */
	_printf("%s", n_string);
	free(n_string);

	return (size);
}

/**
* count_chars - determine the number of chars needed to represent a given int
* @n: the integer to be represented as a string
*
* Return: the number of characters needed to represent n
*/
int count_chars(int n)
{
	int count = 0;
	int quotient;

	if (n < 0)
		count = 1;  /* Account for the negative sign */

	do {
		quotient = n / 10;
		n = quotient;
		count += 1;

	} while (quotient);

	return (count);
}

/**
* print_b - print the binary representation of an integer
* @args: va_list containing argument to be printed. The int must be >= 0
*
* Return: the number of characters printed
*/
int print_b(va_list args)
{
	unsigned int count = 0;
	unsigned int arg = va_arg(args, int);

	if (arg == 0)
	{
		_putchar('0');
		return (1);
	}

	int_to_bin(arg, &count);

	return (count);
}

/**
* int_to_bin - print the binary representation of an integer
* @n: integer to be printed
* @i: pointer to integer on which to increment number of chars printed
*/
void int_to_bin(int n, unsigned int *i)
{
	if (n == 0)
		return;

	int_to_bin(n / 2, i);

	_putchar(n % 2 + 48);  /* +48 to convert into to char */
	*i += 1;
}
