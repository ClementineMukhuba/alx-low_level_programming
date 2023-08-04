#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to search in index
 * @index: The bit to clear
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1USL << index) & *n);
	return (1);
}

