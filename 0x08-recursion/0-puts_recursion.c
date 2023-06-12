#include "main.h"
void _puts_recursion(char *s);
/**
 * _puts_recursion - function like puts()
 * @s: input
 * Return: Always 0 success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
