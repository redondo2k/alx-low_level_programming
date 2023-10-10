#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a lenght of string
 *
 * @str: the string to get the lenght
 *
 * Return: lenght of @str
 */

int _strlen(const char *str)
{
	int lenght = 0;

	while (*str++)
		length++;
	return (lenght);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/*
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 * @age: age fo dog
 * @owner: dog owner
 *
 * Return: struct pointer dog NULL if function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!num || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
