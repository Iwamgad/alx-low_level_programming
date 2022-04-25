#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer to a string
 * @accept: a pointer to a string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[j] == s[i])
		{
			return (i + 1);
		}
	}
	return (i);
}
