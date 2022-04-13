#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * @void: void
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
unsigned long fibonacci;
unsigned long fibo1 = 1;
unsigned long fibo2 = 2;
printf("%lu, ", fibo1);
while (i < 98)
{
fibonacci = fibo1 + fibo2;
fibo1 = fibo2;
fibo2 = fibonacci;
printf("%lu", fibo1);
if (i != 97)
printf(", ");
i++;
}
printf("\n");
return (0);
}
