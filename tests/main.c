#include <stdlib.h>
#include <stdio.h>
#include "../main.h"

/**
* main - test the printf functionalities
*
* Return: the exit code of the program
*/
int main(void)
{
	int n;

	/* Print a string with no specifier */
	n = _printf("Hello");
	printf(" (%d chars)\n\n", n);

	/* Print a % sign */
	n = _printf("100%%");
	printf(" (%d chars)\n\n", n);

	/* Print strings with specifiers */
	n = _printf("I am not a %c%c%c", 'c', 'a', 't');
	printf(" (%d chars)\n\n", n);
	
	n = _printf("%d%% all the time", 100);
	printf(" (%d chars)\n\n", n);

	n = _printf("%s and %s", "cats", "dogs");
	printf(" (%d chars)\n\n", n);

	n = _printf("%r", "abcd");
	printf(" (%d chars)\n\n", n);

	/* Expected output: Png 1, Qbt 2??? (15 chars) */
	n = _printf("%R", "Cat 1, Dog 2???");
	printf(" (%d chars)\n\n", n);

	/* Expected output: 101 (3 chars)*/
	n = _printf("%b", 5);
	printf(" (%d chars)\n", n);
	/* Expected output: 10011010010 (11 chars)*/
	n = _printf("%b", 1234);
	printf(" (%d chars)\n", n);
	/* Expected output: 0 (1 chars)*/
	n = _printf("%b", 0);
	printf(" (%d chars)\n", n);
	/* Expected output: 1 (1 chars)*/
	n = _printf("%b", 1);
	printf(" (%d chars)\n\n", n);
	/* Expected output: 0 (1 chars)*/
	n = _printf("%b", -500);
	printf(" (%d chars)\n\n", n);

	/* Print using an invalid specifier and invalid number of arguments */
	n = _printf("I like %z", "foo", "bar");
	printf(" (%d chars)\n\n", n);

	return (EXIT_SUCCESS);
}
