#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s){
	if (*s != "\n")
	{
		_puts_recursion(s+1);
		printf("%c\n", *s );
	}

}
int main(void)
{
    _puts_recursion("Puts with recursion");
    printf("\n");
    return (0);

}
