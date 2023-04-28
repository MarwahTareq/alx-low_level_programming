#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owener's name
 *  Description: just a longdog structin a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
