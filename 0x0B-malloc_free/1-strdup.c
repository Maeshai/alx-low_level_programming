#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{

	char *copy;
	int size = 0;
	int i;

	if (!str)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	copy = malloc(size + 1);
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
	i++;
	}
	return (copy);
}

