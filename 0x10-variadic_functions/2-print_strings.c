#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * Return: --
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(args, char *);
		printf("%s%s",
			   s == NULL ? "(nil)" : s,
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");
}
