#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1;
int digit2;
for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = 1; digit2 <= 9; digit2++)
{
if (digit1 < digit2 && digit1 != digit2)
{
putchar(digit1 + 48);
putchar(digit2 + 48);
if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
