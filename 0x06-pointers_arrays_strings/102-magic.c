#include <stdio.h>

/**
 * main - ad one line to the code
 *
 * no use of a in the code
 * do not modify p
 * one statement
 * only the line given
 * Return: 0
 */

int main(void)
{
	int n;
	int a[10];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	/* print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
