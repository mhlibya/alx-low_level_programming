#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - skrug
 * @name: wefiojw
 * @f: eiogrje
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
