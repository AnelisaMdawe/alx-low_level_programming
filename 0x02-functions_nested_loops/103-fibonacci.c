#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long  j = 0, k = 1, sum;
	float tot_sum;

		while (1)
		{
			sum = j + k;

		if (j > 4000000)
		       	break;
		if ((j % 2) == 0)
			tot_sum += j;

			j = k;
			j = sum;
			next = j + k;
			j = k;
			k = next;
		}
		printf("%lu\n", sum);

		return (0);
}
