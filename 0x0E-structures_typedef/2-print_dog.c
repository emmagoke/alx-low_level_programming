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
			printf("Name: (nil)\n");
		}
		if (new.owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", new.name);
			printf("Age: %f\n", new.age);
			printf("Owner: %s\n", new.owner);
		}
	}
}
