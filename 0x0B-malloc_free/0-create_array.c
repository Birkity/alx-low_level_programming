#include "main.h"

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
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}

    if (size != 0)
    {

    array = (char *)malloc(size * sizeof(char));
    if (array != NULL)
    {
    	
        while(i < size)
        {
        	array[i] = c;
        	i++;
        }
    }

}
return(array);
}
