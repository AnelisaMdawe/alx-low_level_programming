#include "main.h"
/**
 * reverse_array - revers an array of integers
 * @a: array
 * @n: number of elements and array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
