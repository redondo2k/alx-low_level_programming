#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: of the dog
 * @age: of the dog
 * @owner: owners name
 *
 * Description: just a lone dog struct in a big kitty world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
