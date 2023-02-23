#include "main.h"

/**
 * print_square - Prints n squares according to n number of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)
{
	int x = 0, xx;

	while (x < size && size > 0)
	{
		xx = 0;
		while (xx < size)
		{
			_putchar('#');
			xx++;
		}
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
