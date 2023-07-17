#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - fct qui creer une var
 * @d: pointeur general
 * @name: nom du chien
 * @age: age du chien
 * @owner: proprio
 *
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
