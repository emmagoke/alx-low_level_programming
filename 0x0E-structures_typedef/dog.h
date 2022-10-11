#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This is dog type with parameter name, age an owner.
 * @name: This is a charater pointer
 * @age: This is a float
 * @owner: This is a character pointer.
 *
 * Description: This dog type creates a dog with its name,
 * its age and the name of it's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
