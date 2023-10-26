#include "main.h"

/**
 * binary_to_uint - convert binary number string to unsigned int
 * @b: binary number as a string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;

	k = 0;
	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
			k = k * 2 + (*b++ - '0');
	}
	return (k);
}
