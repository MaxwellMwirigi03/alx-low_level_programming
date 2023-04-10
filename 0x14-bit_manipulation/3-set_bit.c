#include "main.h"

/**
 * set_bit - sets a bit at an index to 1
 * @n: pointer to the chaned number
 * @index: index of the bit changed to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n ^= (1 << index);
	return (1);
}
