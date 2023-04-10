#include "main.h"

/**
 * flip_bits - count no of bits to change for shifting from one no to another
 * 
 * @n: first no
 * @m: second no
 *
 * Return: number of bits to change
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
