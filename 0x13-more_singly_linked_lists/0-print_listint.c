#include "lists.h"

size_t print_listint(const listint_t *h);

/**
 * print_listint - prints the elements of a linked list
 * @h: types of linked listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;

		h = h->next;
	}

	return (num);
}
