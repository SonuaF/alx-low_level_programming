#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
if (i % 3 != 0 && i % 5 != 0)
{
pritnf("%d", i);
}
if (i != 100)
printf(" ");
}
putchar('\n');
return (0);
}
