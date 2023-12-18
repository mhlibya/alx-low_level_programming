#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphABET
 *
 * Return: always return o
 *
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
	if (a != 'e' && a != 'q')
	{putchar(a); }
a++;
}
putchar('\n');
return (0);
}

