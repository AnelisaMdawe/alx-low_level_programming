#include <stdio.h>
#include "lists.h"

int _putchar(char c);

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str) {
			const char *str = h->str;
			while (*str != '\0') {
				_putchar(*str);
				str++;
			}
			_putchar('\n');
		} else {
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		
		s++;
		h = h->next;
	}

	return (s);
}
