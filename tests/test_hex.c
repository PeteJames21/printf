#include <stdio.h>
#include "../main.h"
/**
 * main -Entry point
 *
 * Return: 0 if success
int main(void)
{
	int n;

	/* Expected output: 64*/
	n = _printf("%X", 100);
	printf(" (%d chars)\n", n);

	/* Expected output: 7A*/
	n = _printf("%X", 122);
	printf(" (%d chars)\n", n);

	/* Expected output: 7a*/
	n = _printf("%x", 122);
	printf(" (%d chars)\n", n);

	return (0);
}
