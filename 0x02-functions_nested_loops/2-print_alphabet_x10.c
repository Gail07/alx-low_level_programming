#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int n, c;

	c = 0;
	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	}
}
