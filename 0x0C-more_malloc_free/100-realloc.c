#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: number of elements
 * @old_size: element's size
 * @new_size: element's size
 * Return: return a pointer of array of elements
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *array;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(new_size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		*(array + (i * new_size)) = 0;
	return (array);
}
