#include "main.h"v

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
