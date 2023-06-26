#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program thet perform simple operation
 * @argc: number of arguments
 * @argv: array og arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
