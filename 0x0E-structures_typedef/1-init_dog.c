#include "dog.h"

/**
 * init_dog -initialize a variable
 * @d: pointer to struct
 * @name: pointer to char name
 * @age: dog age
 * @owner: pointer to owner
 * Return: no
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
