#include <stdio.h>
#include "../main.h"

int main(void)
{
	int n;

	/* Expected output: 172*/
	n = _printf("%o", 122);
	printf(" (%d chars)\n", n);

	/* Expected output: 17*/
	n = _printf("%o", 15);
	printf(" (%d chars)\n", n);

	return (0);
}
