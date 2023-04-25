#include <stdarg.h>
#include "main.h"

/**
* rot13 - encrypt and print a string using the ROT13 cipher
* @args: va_list containing the argument to be encrypted
*
* Return: the number of characters printed
*/
int rot13(va_list args)
{
	int i, j, count = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(args, char *);

	if (!str)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (a[j] == str[i])
				{
					count += _putchar(b[j]);
					break;
				}
			}
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}

