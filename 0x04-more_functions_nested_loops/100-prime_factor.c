#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints largest prime factor number
 * followed by a new number
 * Return:0 always.
 */
int main(void)
{
	long int n;
	long int i;
	long int max;

	n = 612852475143;
	max = -1;
	sqrt = n;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2
	}

	for
	(i = 3);
	(i <= sqrt(n));
	(i = i)
	{
			while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
