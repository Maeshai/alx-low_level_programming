#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d%s", va_arg(args, int),
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");
}
