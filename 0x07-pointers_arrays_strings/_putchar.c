#include "main.h"
#include <unistd.h>
/**
 * _putchar - writethe character c to stdout
 * @c: character to print
 * Return: on succes 1
 * on error, 1 is return, and errno is set appropriat
 */
int _putchar (char c)
{
return (write(1, &c, 1));
}
