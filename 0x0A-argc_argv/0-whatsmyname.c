#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of  program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
