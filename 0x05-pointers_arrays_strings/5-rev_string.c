#include "main.h"

/**
 * rev_string - prints a string, in reverse
 * @s: a pointer to a character
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
int i = 0;
int size;
int j;
while (i >= 0)
{
if (s[i] == '\0')
{
size = i;
break;
}
i++;
}
j = size - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
}
