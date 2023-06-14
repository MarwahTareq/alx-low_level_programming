#include <stdio.h>
#include <stdlib.h>
/**
 * main - program should print the result of the multiplication
 * @argc: the size of the argv array
 * @argv: An array containing the program command line argument
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
