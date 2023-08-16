#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog info
 * @name: type char dog's name
 * @age: float type dog's age
 * @owner: char type owner's name
 *
 *Description: structure to store dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
