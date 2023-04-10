#include "main.h"

/**
 * flip_bits - Counts bits needed to get from one no to another
 * @n: No
 * @m: Next number
 *
 * Return: No of bits requires to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int exclusive = n ^ m, count = 0;

	while (exclusive > 0)
	{
		count += (exclusive & 1);
		exclusive >>= 1;
	}

	return (count);
}
