#include "main.h"
/**
* _strpbrk - Entry Point
* @s: input
* @accept: input
* Return: 0success
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
