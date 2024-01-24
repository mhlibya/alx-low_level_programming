#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - siurf
 * @a: skfuhv
 * @b: soufg
 * Return: siorjf
 */
int op_add(int a, int b)
{
int i = a + b;
return (i);
}
/**
 * op_sub - sruofh
 * @a: iuvedhf
 * @b: weuofh
 * Return: isuefh
 */
int op_sub(int a, int b)
{
int i = a - b;
if (i <= 0)
	i = b - a;
return (i);
}
/**
 * op_mul - sujkfh
 * @a: soufh
 * @b: suhf
 * Return: suefh
 */
int op_mul(int a, int b)
{
int i = a * b;
return (i);
}
/**
 * op_div - wouerf
 * @a: dkujg
 * @b: oeirjf
 * Return: eofirujh
 */
int op_div(int a, int b)
{
int i = a / b;
if (b == 0)
{
printf("Error\n"), exit(100);
}
return (i);
}
/**
 * op_mod - srugheuo
 * @a: woirjhf
 * @b: woiejf
 * Return: erjnvuoj
 */
int op_mod(int a, int b)
{
int i = a % b;
if (b == 0)
{
printf("Error\n"), exit(100);
}
return (i);
}
