#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * @void: void
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
double fibonacci;
double fibo1 = 1;
double fibo2 = 2;
printf("%0.0f, ", fibo1);
while (i < 97)
{
fibonacci = fibo1 + fibo2;
fibo1 = fibo2;
fibo2 = fibonacci;
printf("%0.0f", fibo1);
if (i != 96)
printf(", ");
i++;
}
printf("\n");
return (0);
}
