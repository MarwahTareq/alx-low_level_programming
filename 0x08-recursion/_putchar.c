#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on succes 1
 * On error, -1 is returned, and errnois set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
