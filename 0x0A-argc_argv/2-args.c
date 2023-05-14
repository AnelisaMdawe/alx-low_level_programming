#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments it receives
 * @argc: is number of arguments
 * @argv: is an array strings of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
