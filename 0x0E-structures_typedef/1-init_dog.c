#include "dog.h"
#include <stdio.h>
/**
 * init_dog - dog data initialized
 *@d: dog struct intialized
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Description: dog id card being intialized
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d > 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
