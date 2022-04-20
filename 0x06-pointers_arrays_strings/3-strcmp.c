#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: returns a -15 if s1 < s2, 15 if s1 > s2 & 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
int sizes1, sizes2, i = 0, j = 0;
while (i >= 0)
{
if (s1[i] == '\0')
{
sizes1 = i;
break;
}
i++;
}
i = 0;
while (i >= 0)
{
if (s2[i] == '\0')
{
sizes2 = i;
break;
}
i++;
}
for (j = 0; j < sizes1 - 1 && j < sizes2 - 1; j++)
{
if (s1[j] < s2[j])
{
return (*s1 - *s2);
}
else if (s1[j] > s2[j])
{
return (*s1 - *s2);
}
else
{
return (0);
}
}
return (0);
}
