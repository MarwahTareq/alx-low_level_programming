#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: numbers of bytes
 * Return: copying memory with n bytes change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
