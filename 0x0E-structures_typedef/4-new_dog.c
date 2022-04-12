#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	
    dog_t *my_dog;
    if (my_dog == NULL)
     return (NULL);
     my_dog = new_dog(name, age, owner);

     return (my_dog);
}
