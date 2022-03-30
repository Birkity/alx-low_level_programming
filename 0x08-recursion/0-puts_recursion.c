#include "main.h"

/**
*main - check the code
* Return: Always 0.
*/
void _puts_recursion(char *s){
	Puts("%c\n", &s );
	s++;
	_puts_recursion(s);
}

int main(void){
 _puts_recursion("Puts with recursion");
return (0);
}
