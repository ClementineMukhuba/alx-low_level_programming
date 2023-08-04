#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * needed to flip to get from one to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: number of bits for flipping
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
unsigned int count = 0;

	while (exclusive)
	{
		If(exclusive & 1ul)
			count++;
		exclusive = exclusive >> 1;
	}
	return (count);
}

