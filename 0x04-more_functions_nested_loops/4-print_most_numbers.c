#include "main.h"

/**
 * print_most_numbers - prints most of the numbers
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
	if (i != 2 && i != 4)
		printf("%i", i);

printf("\n");
}
