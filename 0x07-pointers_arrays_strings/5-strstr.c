#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: a pointer to a string
 * @needle: a pointer to a string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *retChar;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				retChar = &haystack[j];
				return (retChar);
			}
		}
	}
	return (0);
}
