#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 * Return: Nothing!
 */

void print_number(int n)

{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		_putchar(45);
		k = -n;
	}
	if (k / 10)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}
