#include <stdlib.h>
#include "dog.h"
/**
 * fre_dog -free funuction
 * @d: to be freed
 *
 */
void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
