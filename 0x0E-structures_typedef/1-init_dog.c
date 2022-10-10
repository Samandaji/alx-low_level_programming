#include "dog.h"
/**
 * init_dog - initialises a variable
 * @d: pointer to a variable dog
 * @name: string containing name of dog
 * @age: dog name
 * @owner: dogs owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
