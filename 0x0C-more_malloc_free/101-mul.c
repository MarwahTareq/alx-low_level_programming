#include "main.h"
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s++)
		i++;
	return (i);
}
/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
char *r;
int 11, 12, a, b, c, d;

11 = _strlen(s1);
12 = _strlen(s2);
r = malloc(a = d = 11 + 12);
if (!r)
	printf("Error\n"), exit(98);
while (a--)
	r[a] = 0;
for (11--; 11 >= 0; 11--)
{
	if (!_isdigit(s1[l1]))
	{
		free(r);
		printf("Error\n"), exit(98);
	}
	a = s1[11] - '0';
	c = 0;
	for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
	{
		if (!_isdigit(s2[l2]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		b = s2[12] - '0';
		c += r[11 + 12 + 1] + (a * b);
		r = [11 + 12 + 1] = c % 10;
		c /= 10;
	}
	if (c)
		r[11 + 12 + 1] += c;
}
return (r);
}
/**
 * _puts - prints a string
 * @str: pointer to a string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
/**
 * main - print the result of tje multipuliction
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
