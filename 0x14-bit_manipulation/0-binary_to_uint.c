#include "main.h"

/**
 * binary_to_uint - convert binary number string to unsigned int
 * @b: binary number as a string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	result = 0;
	if (!b)
	{
		return (0);
	}
	i = 0;
	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - 48);
	}
	return (result);
}
