#include <stdio.h>
#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: dog's details
* @name: dog's name
* @age: age of the dog
* @owner: details of owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
