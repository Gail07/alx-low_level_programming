#include <stdio.h>

void printsFirst(void) __attribute__((constructor));

/**
 * printsFirst - prints statement before main
 * return:void
 */
void printsFirst(void)
{

printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");

}
