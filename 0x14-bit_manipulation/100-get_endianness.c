#include "main.h"

/**
 * get_endianness - Check machine endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int check = 1; /* Initialize integer to 1 */
	char *check_ptr = (char *)&check; /* Create pointer to integer */

	if (*check_ptr)
		return (1); /* Little Endian */
	else
		return (0); /* Big Endian */
}
