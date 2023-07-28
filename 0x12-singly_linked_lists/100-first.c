#include <stdio.h>

/**
  * First _sentence – Print the sentence provided
  * before the main function is executed.
  */

void First_sentence(void) __attribute__ ((constructor));

/**
* Execution of First sentence function
*/

void First_sentence (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

