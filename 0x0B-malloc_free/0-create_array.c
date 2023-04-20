#include "main.h"
/**
 * main: creat-array of char,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize
 * Return: Pointer to the array initialize or null
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
