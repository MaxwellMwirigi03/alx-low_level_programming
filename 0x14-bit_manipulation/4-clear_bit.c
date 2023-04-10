#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number supposed to change
 * @index: index of bit to remove
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
