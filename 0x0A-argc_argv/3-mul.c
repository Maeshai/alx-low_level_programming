#include <stdio.h>
#include "main.h"

/**
 *main- print sum of two numbers.
 *@argc: number of command line arguments
 *@argv: pointer to an array of command line arguments
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = _atoi(argv[1]) *_atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
