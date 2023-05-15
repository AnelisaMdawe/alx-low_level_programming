#!/bin/bash
#include "main.h"
/**
 * _strstr - the entry point
 * @haystack: input
 * @needle: input
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *p = needle;

		while (*t == *p && *p != '\0')
		{
			t++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
