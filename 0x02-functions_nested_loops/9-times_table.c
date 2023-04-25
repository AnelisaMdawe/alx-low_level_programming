#include "main.h"
/**
 *times_table - prints the 9 time table, starting with 0.
 */
void times_table(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (j = 0; j < 10 j++)

		{	k = J * 1;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_Putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar('');
				_putcher(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
