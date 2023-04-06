#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *_strlen_recursion - returns the length of a string
 * Return: 1 if a string is a palindrome, 0 it's not
 */
int _strlen_recursion(char *s);
int check_palindrome(char *s, int i, int leng);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - recursively checks the characters for palindrome
 * @s: string to check
 * @i: iterator
 * @leng: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int leng)
{
	if (*(s + i) != *(s + leng - 1))
		return (0);
	if (i >= leng)
		return (1);
	return (check_palindrome(s, i + 1, leng - 1));
}
