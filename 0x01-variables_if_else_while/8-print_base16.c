#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: (0)
 */
int main(void)
{
int z;

for (z = 48; z <= 57; z++)
{
putchar(z);
}
for (z = 97; z <= 102; z++)
{
putchar(z);
}
putchar('\n');
return (0);
}
