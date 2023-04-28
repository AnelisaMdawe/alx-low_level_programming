#include "main.h"

/**
 * _isupper - check for  numbers 0 - 9
 * @c: int to be checked
 * Return: 1 if c is a digit otherwise return 0 if not.
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
