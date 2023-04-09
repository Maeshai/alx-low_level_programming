#include "main.h"

/**
 * str_checker - Compare two strings
 * @s1: fisrt string
 * @s2: second string
 * Return: returns 1 if the strings can be considered identical, otherwise 0
 */
int str_checker(char *s1, char *s2)
{
        if (*s1 == '\0')
        {
                if (*s2 != '\0' && *s2 == '*')
                {
                        return (str_checker(s1, s2 + 1));
                }
                return (*s2 == '\0');
        }

        if (*s2 == '*')
        {
                return (str_checker(s1 + 1, s2) || str_checker(s1, s2 + 1));
        }
        else if (*s1 == *s2)
        {
                return (str_checker(s1 + 1, s2 + 1));
        }
        return (0);
}
