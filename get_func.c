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
		default:
			func = NULL;
	}

	return (func);
}
