#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: create a program that prints filename followed by a new line
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: always 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{

	printf("%s\n", *argv);


	return (0);
}
