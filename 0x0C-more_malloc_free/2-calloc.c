#include "main.h"
/**
 * _memst - fills memory with a constant byte
 * @s: pointer to put constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: array length
 * @size: size of each elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
	return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
