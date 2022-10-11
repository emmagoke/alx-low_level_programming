#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the value of struct dog type
 * followed by a new line.
 * @d: The struct dog object.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (!((*d).age))
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if ((*d).owner == NULL)
		{
			printf("Owner: nil\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
