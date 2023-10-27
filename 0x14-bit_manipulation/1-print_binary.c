#include "main.h"

/**
 * print_binary - Print binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* Right shift n by 1 to get the next bit */
	}
	_putchar((n & 1) + '0'); /* Use bitwise AND to extract the LSB */
}

