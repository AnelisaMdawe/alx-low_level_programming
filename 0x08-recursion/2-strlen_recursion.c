#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: the string to be measured
 * Return: the lengh of a string
 */
int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
