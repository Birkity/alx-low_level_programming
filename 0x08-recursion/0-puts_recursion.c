#include "main.h"

/**
*main - check the code
* Return: Always 0.
*/
void _puts_recursion(char *s){
puts(&s);
	s++;
	_puts_recursion(s);
   puts('\n');
}

int main(void){
 _puts_recursion("Puts with recursion");

return (0);
}
