#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function allocates memory for an array
 * @nmemb: number of elements
 * @size: element's size
 * Return: returns a pointer to an array of elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *array;

if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(nmemb * size);
if (array == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
*(array + (i * size)) = 0;
return (array);
}
