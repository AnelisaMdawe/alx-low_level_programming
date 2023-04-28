#include "main.h"
/**
 * print_square - print a square that is followed by new line
 * @size: square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (j < size; i++)
		{
			for (j = 0; < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
