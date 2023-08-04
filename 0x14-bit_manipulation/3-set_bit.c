#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number to search in index
 * @index: The bit to fetch
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1USL << index) | *n);
	return (1);
}

