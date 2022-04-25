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
	unsigned int flag, i, j, index;
	char *retChar;

	for (i = 0; needle[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			index = j;
			break;
		}
	}
	if (flag == 0)
	{
		return (0);
	}
	else
	{
		retChar = &haystack[index];
	}
	return (retChar);
}
