#include <stdlib.h>
#include <stdio.h>
/**
 * main - jyfjk
 *
 * @argc: kujgkgh
 * @argv: hjgbgk
 *
 * Return: jhyg
 */
int main(int argc, char *argv[])
{
int n = 0;
char *c;

while (--argc)
for (c = argv[argc]; *c; c++)
{
if (*c < '0' || *c > '9')
{
printf("Errorn\n");
return (1);
}
n += atoi(argv[argc]);
}
printf("%d\n", n);
return (0);
}
