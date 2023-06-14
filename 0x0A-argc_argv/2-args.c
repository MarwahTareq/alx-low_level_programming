#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: the size of the argv array
 * @argv: An array containing the program command line argument
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
