#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc if fails exit
 * @b: int
 * Return: pointer to array inisialize or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);
	return (i);
}
