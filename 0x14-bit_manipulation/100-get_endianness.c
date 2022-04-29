#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness.
 * 
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;

	char *y = (char*)&x;
	return (*y+48);
}

