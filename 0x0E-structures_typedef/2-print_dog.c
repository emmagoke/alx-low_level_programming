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
	struct dog new = *d;

	if (d == NULL)
	{
		;
	}
	else
	{
		if (new.name == NULL)
		{
			printf("nil)\n");
		}
		else
		{
			printf("Name: %s\n", new.name);
		}
		if (!(new.age))
		{
			printf("(nil)");
		}
		else
		{
			printf("Age: %f\n", new.age);
		}
		if (new.owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", new.owner);
		}
		if( new.name != NULL && !(new.age) && new.owner != NULL)
		{
			printf("Name: %s\n", new.name);
			printf("Age: %f\n", new.age);
			printf("Owner: %s\n", new.owner);
		}
	}
}
