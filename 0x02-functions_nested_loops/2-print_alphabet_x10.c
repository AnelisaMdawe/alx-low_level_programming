#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * follow by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;

	char ch;

	while (i++ <= 9)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
