#include "../main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * main - checks for length of the string
 *
 * Return: o if success
 */
int main(void)
{
	int n;
	/* print string with no specifier*/
	n = _printf("I am inevitable");
	printf(" (String len %d)\n", n);

	/*print a string specifiers*/
	n = _printf("The collaborators for this project are; %s,and %s \n", "Peter", "Kelvin");
	printf("(String len %d)\n", n);

	/* Print string with invalid specifier */
	n = _printf("AI is %c\n", "good");
	printf("(string len %d)\n", n);

	/* print non printable characters with specifier */
	n = _printf("This is a new line %S", "\n");
	printf("( string len %d)\n", n);

	/* Expected output: 64*/
	n = _printf("%X", 100);
	printf(" (%d chars)\n", n);

	/* Expected output: 101 7A*/
	n = _printf("%X", 122);
	printf(" (%d chars)\n", n);

	/* print a string with specifiers */
        n = _printf("%r", "printf project");
        printf("(string len %d)\n", n);

	return (0);
}
