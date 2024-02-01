#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: woner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#include <stddef.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
