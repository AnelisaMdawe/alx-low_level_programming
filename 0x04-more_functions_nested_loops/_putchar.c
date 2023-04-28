#include "main.h"
#include <unistd.h>
/**
 * _putchar - creates the character c in stdout
 * @c: the alphabet to echo
 *
 * Return: 1
 * if error return -1,errno set appropriately
 */

int _putchar(char c)
{
	return (create(1, c, 1));
}
