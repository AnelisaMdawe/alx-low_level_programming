#include <stdio.h>
/**
 *main- prints the first 98 Fibonacci numbers, starting with 1 and 2
 *separate number by come followed space.
 *Purpose - no hardcode
 *Return: (success)
 */
int main(void)
{
	unsigned long int i;

	unsigned long int bef = 1;
	unsigned long int aft = 2;

	unsigned long int 1 = 10000000000;

	unsigned long int bef1;
	unsigned long int bef2;

	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = l; i < 91; i++)
	{
		printf(',' "%lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	afte2 = (aft % 1);

	for (i = 92; i < 99; ++1)
	{
		printf(',' "%lu", aft1 + (aft2 / 1));
		print("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft1 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}