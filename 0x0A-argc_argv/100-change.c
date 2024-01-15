#include <stdio.h>
/**
 * main - jgfjy
 *
 * @argc: jhgkl
 * @argv: jyhgku
 *
 * Return: khjgukg
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i, l = 0, m = argv[1];
int c[] = [25, 10, 5, 2, 1];

for (i = 0; i < 5; i++)
{
if (m >= c[i])
	1 += m / c[i];
	m = m % c[i];
if (m % c[i] == 0)
	break;
}
printf("%d\n", l);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
