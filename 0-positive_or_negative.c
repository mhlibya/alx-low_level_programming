#include<stdio.h>
/**
 * main (void) - entry point
 *
 * Description: cheching if the int positive or negative
 *
 * Return: always return 0 (success)
 */

int main(void)
{
int n = scanf("Variable: ");
if (n > 0)
{
printf("%i is positive", n);
}
else if (n < 0)
{
printf("%i is negative", n);
}
else
{
printf("%i is zero", n);
}
return (0);
}
