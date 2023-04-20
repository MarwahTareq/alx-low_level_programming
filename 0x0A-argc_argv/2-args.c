#include <stdio.h>
/**
 * main - All arguments should be printed, including the first one
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

