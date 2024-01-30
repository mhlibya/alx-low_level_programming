#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - jyhg
 * @separator: jyfgyj
 * @n: kuh
 * @...: uighiu
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
{
printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
}
va_end(ap);
}
