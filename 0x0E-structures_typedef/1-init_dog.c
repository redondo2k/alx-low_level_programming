#include "dog.h"

/**
 * init_dog -initialize a dog
 * @d: the dog toinit
 * @name: of the dog
 * @age: the dog
 * @owner: owners name
 * Return: void
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
