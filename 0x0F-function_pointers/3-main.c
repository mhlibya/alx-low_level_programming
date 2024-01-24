#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - wiurfh
 * @argc: woeifj
 * @argv: wiorjg
 * Return: oridfj
 */
int main(int argc, char **argv)
{
int (*op_func)(int, int), a, b;

if (argc != 4)
	printf("Error\n"), exit(98);
a = atoi(argv[1]);
b = atoi(argv[3]);

op_func = get_op_func(argv[2]);
if (!op_func)
	printf("Error\n"), exit(99);

printf("%d\n", op_func(a, b));
return (0);
}
