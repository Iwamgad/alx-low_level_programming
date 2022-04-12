#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i = 1;
int k = 0;
while (i <= 10)
{
for (int i = 0; i < 10; i++)
{
int m = k * i;
_putchar(m + '0');
if (i != 9)
_putchar(',');
if (m <= 9)
{
_putchar(' ');
_putchar(' ');
}
else if (m > 9)
{
_putchar(' ');
}
}
_putchar('\n');
i++;
k++;
}
}
