#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
void *malloc_checked(unsigned int b)
{
	int *cr;

	cr = malloc(sizeof(int) * b);

	if (cr == NULL)
		return (NULL);
	
}
