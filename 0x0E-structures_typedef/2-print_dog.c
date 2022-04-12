#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void print_dog(struct dog *d)
{
	
	if (d->name == NULL)
	    d->name = "(nil)";
	
	if (d == NULL)
	    return;

	if (d->owner == NULL)
		d->owner = "(nil)";

	d = malloc(sizeof(struct dog));
	printf("Name : %d\n", d->name);
	printf("Age : %d\n", d->age);
	printf("Owner : %d\n", d->owner);
}
