#include "main.h"

/**
 * get_bit – function that returns the value of a bit at a given index.
 * @n: number to search in index
 * @index: The bit to fetch
 *
 * Return: the value of the bit at index -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if(index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
