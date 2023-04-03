#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *@s: pointer to put the const
 *@b: const
 *@n: number of byte to be use
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i=0;

	for (;n >0 ; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
