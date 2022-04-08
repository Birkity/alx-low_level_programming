#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i,j;

	if (s1 == NULL || s2 == NULL)
	   return(NULL);

	s = malloc(n * sizeof(int));

	for (i = 0; s1 !='\0'; ++i);
		s[i] = s1[i];
	for (j = 0; j <= '\0'; ++j)
	s[i+j] = s2[j];

     return(s);
	
}
