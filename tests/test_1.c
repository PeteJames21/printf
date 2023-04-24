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

	return (0);
}
