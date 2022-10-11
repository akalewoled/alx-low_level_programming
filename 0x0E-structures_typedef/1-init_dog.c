#include "dog.h"

/**
 * init_dog - ssghn
 * @d:instance
 * @name: the aem
 * @age :age
 * @owner: the new owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
