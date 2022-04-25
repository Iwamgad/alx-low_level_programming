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
	unsigned int i, j = 0, retLength = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				retLength++;
				break;
			}
		}
	}
	return (retLength + 1);
}
