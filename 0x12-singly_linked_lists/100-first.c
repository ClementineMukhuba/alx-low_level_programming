#include <stdio.h>

void First(void) __attribute__ ((constructor));

/**
 * First – Prints the sentence provided
 * before the main function is executed.
 */
void First(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

