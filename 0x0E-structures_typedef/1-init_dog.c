#include <stdio.h>
#include "dog.h"

/**
 * init_dog - This function initialize a struct dog type.
 * @d: A pointer to the struct type
 * @name: A name of the dog
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
