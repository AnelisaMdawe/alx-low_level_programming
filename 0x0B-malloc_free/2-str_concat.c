#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends input and add together a size
 * @s1: input of one concat
 * @s2: input of two concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ci;

	if (s1 == NULL)
		s1 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + ci + 1));

	if (concat == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
