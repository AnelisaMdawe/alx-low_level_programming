#include <stdio.h>

/**
 * main - prints alphabet in lowercase, and in uppercase,followed by a new line
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
