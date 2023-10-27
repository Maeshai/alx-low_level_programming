#include "main.h"

/**
 * clear_bit - Clears a bit at a given index to 0.
 * @n: A pointer to the number where the bit will be cleared.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
