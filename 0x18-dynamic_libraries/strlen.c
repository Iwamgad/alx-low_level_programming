#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a character
 *
 * Return: returns an integer
 */
int _strlen(char *s)
{
        int len = 0;

        while (s[len] != '\0')
        {
                len++;
        }
        return (len);
}
