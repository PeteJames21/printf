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
	printf(" (%d chars)\n", n);

	/* Print a % sign */
	n = _printf("100%%");
	printf(" (%d chars)\n", n);

	/* Print strings with specifiers */
	n = _printf("I am not a %c%c%c", 'c', 'a', 't');
	printf(" (%d chars)\n", n);

	/* Print using an invalid specifier and invalid number of arguments */
	n = _printf("I like %z", "foo", "bar");
	printf(" (%d chars)\n", n);

	return (EXIT_SUCCESS);
}
