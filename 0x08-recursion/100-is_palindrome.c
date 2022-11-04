#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: the string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare_string - compares characters in the string
 * @s: the string
 * @n: iterator 1
 * @x: iterator 2
 * Return: 0
 */

int compare_string(char *s, int n, int x)
{
	if (*(s + n) == *(s + x))
	{
		return (1);
	}
	return (0 + compare_string(s, n + 1, x - 1));
	return (0);
}
/**
 * is_palindrome - checks for a string that reads the same backwards
 * @s: the string
 * Return: 1 if a string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_string(s, 0, _strlen_recursion((s) - 1)));
}

