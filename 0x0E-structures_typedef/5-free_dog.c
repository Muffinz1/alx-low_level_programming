#include "dog.h"
#include <stdio.h>
/**
 * free_dog - a function that frees dogs
 *
 *@d: dog id
 *
 *description: function free d
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}

}
