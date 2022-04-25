#include "main.h"
#include <stddef.h>

/**
 * _strchr - copies memory area
 * @s: a pointer to a string
 * @c: a character
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i, index;
	if (s == NULL)
	{
		return NULL;
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				index = i;
				break;
			}
		}
		s = &s[index];
	}
	return (s);
}
