#ifndef DOG_H
#define DOG_H
 /**
  * struct dog - dog's maining info
  * @name: Name of the dog
  * @age: the age of the dog
  * @owner: the dog's owner
  *
  * Description: no descriotion for this items
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedeffor struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
