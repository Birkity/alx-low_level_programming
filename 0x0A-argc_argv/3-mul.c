#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}else{
		mul = argv[0] * argv[1];
		printf("%d\n", mul);
	}

	return (0);
}
