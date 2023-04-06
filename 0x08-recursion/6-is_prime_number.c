#include "main.h"

/**
 * is_prime_number - test if n is a prime number or not
 * @n: number to assess
 * @i: iterator
 * Return: returns 1 if the input integer, otherwise return 0
 */

int test_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_prime(n, n - 1));
}

/**
 * test_prime - calculates if a number is prime recursively
 * @n: number to assess
 * @i: iterator
 * Return: 1 if n is prime, otherwise return 0
 */
int test_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (test_prime(n, i - 1));
}
