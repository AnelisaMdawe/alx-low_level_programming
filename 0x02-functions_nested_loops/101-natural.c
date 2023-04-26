#include <stdio.h>
/**
 * main - entry main,list of all n below 1024 (exclude) multiples of 3 or 5.
 * Return:always 0
 */
int main(void)
{
	int i, sum = o;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
