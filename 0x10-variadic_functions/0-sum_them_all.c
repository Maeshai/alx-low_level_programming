#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - entry point
 * @n: The number of paramters passed to the function
 * Description: --
 * Return: If n == 0 - 0, Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, i = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (i < (int)n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
