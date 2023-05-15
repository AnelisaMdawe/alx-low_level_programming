#!/bin/bash
#include "main.h"
/**
 * _memset - fill the first byte of memory with a specified value
 * @s: starting address of the memory to be filled
 * @b: the value desired
 * @n: the number of bytes to be changed
 * Return: changed array with a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
