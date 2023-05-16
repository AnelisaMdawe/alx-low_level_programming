#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checking if string are digit
 * @str: array str
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*counting string*/
	{
		if (!isdigit(str[count])) /*check if str are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: count arguments find
 * @argv: arrays arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declare variable*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*it goes through te whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert a string to int*/
			sum += str_to_int;
		}
		else
		{
				printf("Error\n");
				return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*prinnts the sum*/

	return (0);
}
