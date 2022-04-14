#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @void: it does not take any number
 * Return: no return
 */
void more_numbers(void)
{
int i, k;
int j = 0;
while (j < 10)
{
for (i = 0; i <= 14; i++)
{
if (i <= 9)
{
_putchar(i + '0');
}
else
{
k = i % 10;
_putchar('1');
_putchar(k + '0');
}
}
_putchar('\n');
j++;
}
}
