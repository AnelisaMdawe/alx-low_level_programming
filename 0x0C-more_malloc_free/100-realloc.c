#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc andd free
 * @ptr: a pointer to the memory
 * @old_size: bytes of the allocated space
 * @new_size: bytes of the new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		return (NULL);
		return (ptr);
	}
	else
	{
		if (new_size == 0)
			free(ptr);
			return (NULL);
	}
	ptr = malloc(new_size);

	if (i = 0; i < old_size && I < new_size; i++)
	{
		ptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (ptr);
}
	

