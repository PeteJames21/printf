#include <stdio.h>
#include "../main.h"

int main(void)
{
	int n;

	n = _printf("%S", "Best\nSchool");
	printf(" (%d chars)\n", n);


	return (0);
}
