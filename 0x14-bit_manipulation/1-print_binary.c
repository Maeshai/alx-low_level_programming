#include "main.h"

/**
 * print_binary - print number as a binary string
 * @n: number to print
 *
 * Return: nothing 
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
		putchar('0');
	while(mask <= n)
		mask <<= 1;
	if (mask > n)
		mask >>= 1;
	while (mask)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}
