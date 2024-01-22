#include "dog.h"
#include <stdio.h>
/**
 * print_dog - slifjsi
 * @d: soepfk
 */
void print_dog(struct dog *d)
{
int i;

for (i = 0; i < 1; i++)
{
if (d == NULL)
	break;

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (d->owner == NULL)
	printf("Owner: (nil)\n");
else
	printf("Owner: %s\n", d->owner);
}
}
