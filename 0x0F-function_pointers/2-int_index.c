#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to campring function
 *
 * Return: index of the first elemnt for which
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i] != 0))
return (i);
}
}
return (-1);
}
