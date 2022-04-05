#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for ( i = 0; i < argc; ++i)
	{
		_putchar(argv[i]);
	}
	return 0;
}
