#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers fro 1 to 100
 * followed by a new line
 * multiplication of three prints fizz and five prints buzz
 * Return: alwayz 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}

	else if (i % 3 == 0 && i % 5 == 0)
	{
		printf(" FizzBuzz");
	}
	else if (i == 1)
	{
		printf("%d", i);
	}
	printf("\n");

	}
	return (0);
}
