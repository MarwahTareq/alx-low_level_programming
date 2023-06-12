#include "main.h"
/**
 * _strlen_recursion - return the length of string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
