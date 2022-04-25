#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a pointer to a string
 * @accept: a pointer to a string
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int flag, index, i, j;

	for (i = 0; s[i] >= '0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			index = i;
			break;
		}
	}
	if (flag == 0)
        {
		return (NULL);
        }
        else
        {
		s = &s[index];
	}
	return (s);
}
