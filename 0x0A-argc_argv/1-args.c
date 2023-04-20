#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of commit line argument
 * @argv: pointer to an array of command line argument
 * Return: 0 (success, non-zer-fail.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
