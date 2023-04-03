#include "main.h"
/**
* _memset - fill block of memory with specific value
* @s: will start an address of memory we will filled
* @n: bytes of the memory area
* @b:bytes to be changed
* Return: changing arrays with new value for n byte
*/
char *_memset(char *s, char b, unsigned int n);
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
