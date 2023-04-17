#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - memory free the dog
 * @d: struct dog input
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

