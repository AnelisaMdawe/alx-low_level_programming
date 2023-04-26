#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to exctract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int print_last_digit = n % 10;

	if (print_last_digit < 0)
	{
		print_last_digit *= -1;
	}

	_putchar(print_last_digit + '0');
	return (print_last_digit);
}
