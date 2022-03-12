#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: (0)
 */
int main(void)
{
int s;
s = 122;
while (s >= 97)
{
putchar(s);
s--;
}
putchar('\n');
return (0);
}
