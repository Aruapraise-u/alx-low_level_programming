#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: structure copy
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}