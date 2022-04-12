#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: takes a number
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
putchar(',');
putchar(' ');
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
putchar(','); 
putchar(' ');
}
}
putchar('\n');
}
