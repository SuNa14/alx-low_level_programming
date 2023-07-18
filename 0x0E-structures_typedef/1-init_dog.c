#include "dog.h"
/**
 * init_dog - Creates a structure with values
 * @d: Structure
 * @name: Name property
 * @age: Age property
 * @owner: Owner property
 * Return: 0
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
