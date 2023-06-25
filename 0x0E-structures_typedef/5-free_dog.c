#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: struct the dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
