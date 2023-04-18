#include <stdio.h>
#include <unistd.h>
/**
 * main: Entry Point
 *
 * return: 1 (success)
 */
int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, x, 59);
	return (1);
}
