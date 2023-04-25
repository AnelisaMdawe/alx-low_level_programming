#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers, starting with 1 and 2
 * separate by a coma followed by space.
 * Return: 0 always.
 */
int main(void)
{
	int count;
	unsigned lonf fil1 = 0, fib2 =1, sum;
	
	for (count = 0; count <50; count++)
	{
		sum = fib1+ fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
