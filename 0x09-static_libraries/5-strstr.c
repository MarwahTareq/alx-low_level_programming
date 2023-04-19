#include "main.h"
/**
 * _strstr: Entry Point
 * @needle: intry
 * @haystack: intry
 * Return: 0 succes
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *p = needle;
while (*i == *p && *p != '\0')
{
i++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
