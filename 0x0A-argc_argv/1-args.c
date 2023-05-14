#include <stdio.h>
#include "main.h"
/**
 * main - print out numbers and arguments passed to the program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 10);

	return (0);
}
