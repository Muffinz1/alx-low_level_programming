#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for dog data
 *
 * @name: dog name entry
 * @age: float for age of the dog
 * @owner: owner name for information
 *
 * Description: ID for dogs in the dog land
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
