#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to a string
 * Return: returns the length of the string s
 */

int length;

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		length++;
		_strlen_recursion(s + 1);
	}
	return (length);
}
