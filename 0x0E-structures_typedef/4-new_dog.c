#include <stdlib.h>
#include<string.h>
#include "dog.h"


/**
 * new_dog - makes new dog
 * @name: name
 * @age: dog's age
 * @owner: dog owner
 *
 * Return: pointer to new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int length1, length2;

length1 = strlen(name);
length2 = strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}

dog->name = malloc(sizeof(char) * (length1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (length2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

