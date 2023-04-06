#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number used
 * @i: iterator
 * Return: result square root
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (square(n, 0));
}


/**
 *square- recursively calculates
 *the natural square root of a number
 * @n: number used to compute the square root of
 * @i: iterator
 * Return: result square root
 */
int square(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (square(n, i + 1));
}
