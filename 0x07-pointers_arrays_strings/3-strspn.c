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
        unsigned int retLength = 0, i, j;

        for (j = 0; accept[j] != '\0'; j++)
        {
                for (i = 0; s[i] != ','; i++)
                {
                        if (accept[j] == s[i])
                        {
                                retLength++;
                        }
                }
        }
        return (retLength);
}
