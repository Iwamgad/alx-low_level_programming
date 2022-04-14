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
for (j = 0; j <= 14; j++)
{
c = j;
if (c > 9)
{
_putchar('1');
c = j % 10;
}
_putchar('0' + c);
}
_putchar('\n');
j++;
}
}
