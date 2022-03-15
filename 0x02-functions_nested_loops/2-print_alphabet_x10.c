#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c < 10)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n')
}
