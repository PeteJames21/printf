#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
* get_func - get function for printing a specified argument type
* @specifier: data type of the argument to be printed
*
* Return: a function that can print the specified data type
*/
int (*get_func(char specifier)) (va_list)
{
	int (*func)(va_list);

	switch (specifier)
	{
		case 'c':
			func = print_char;
			break;
		case 's':
			func = print_s;
			break;
		case 'r':
			func = print_reverse;
			break;
		case 'd':
			func = print_d;
			break;
		case 'i':
			func = print_d;
			break;
		case 'R':
			func = rot13;
			break;
		case 'b':
			func = print_b;
			break;
		case 'X':
			func = print_X;
			break;
		case 'x':
			func = print_x;
			break;
		case 'S':
			func = print_S;
			break;
		default:
			func = NULL;
	}

	return (func);
}
