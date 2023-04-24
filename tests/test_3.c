#include "../main.h"
#include <stdio.h>
/**
 * main - Tests for reversing strings
 *
 * Return: reversed string and its length
 */
int main(void)
{
	int n;

	/* print a string with specifiers */
	n = _printf("%r", "printf project");
	printf("(string len %d)\n", n);
	return (0);
}
