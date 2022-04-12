#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j, m;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
m = i * j;
if (j == 0)
{
_putchar(m + '0');
}
else if (m <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
}
else if (m >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
}
_putchar('\n');
}
}
