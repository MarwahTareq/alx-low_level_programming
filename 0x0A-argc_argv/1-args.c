#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: the size of argv array
 * @argv: An array that containing the program command line argument
 *
 * Return: Always argc.
 */
int main(int argc, char **argv)
{
	if (*argv[0] > 0)
		printf("%i\n", argc -1);
	return (0);
}
