#include "main.h"

/**
 * get_endianness - is a machine is little/big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)

{
	unsigned int num = 1;
	char *c = (char *) &num;

	if (*c == 1)
		return (1);

	return (0);
}
