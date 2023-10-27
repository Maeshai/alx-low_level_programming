#include "main.h"

/**
 * binary_to_uint - Convert binary number string to unsigned int.
 * @b: Binary number as a string.
 *
 * Return: Converted number as unsigned int, or
 *         0 if there's an invalid character or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		k = (k << 1) | (*b - '0');
		b++;
	}

	return (k);
}
