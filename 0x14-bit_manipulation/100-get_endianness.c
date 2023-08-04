#include "main.h"

/**
 * get_endianness – Returns the endianness
 *
 * Return: 0 for big endian, 1 for a little one
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

