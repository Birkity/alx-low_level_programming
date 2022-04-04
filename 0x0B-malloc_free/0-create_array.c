#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - initializes an array of chars
 * @c: The character to print
 *
 * Return: On success NULL.
 * Returns a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
    char *array = NULL;
	
	if (size == 0)
	{
		return NULL;
	}

    if (size != 0)
    {
    array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (int i = 0; i < size; i++)
				array[i] = c;
		}
    }
    return(array);
}

