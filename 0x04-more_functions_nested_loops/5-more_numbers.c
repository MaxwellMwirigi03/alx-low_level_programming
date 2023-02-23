#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 * Return: 10 times of the numbers from 0 to 14
 */

void more_numbers(void)

{
	int x, y;
	int i = 0;

	while (i < 10)
	{
	for (x = 0; x <= 14; x++)
	{
	y = x;
	if (x > 9)
	{
	_putchar('1');
	y = x % 10;
	}
	_putchar('0' + y);
	}
	_putchar('\n');
	i++;
	}
}
