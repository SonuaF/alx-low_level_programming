#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - prints all numbers up to 98
 *
 * @n - the first number to print
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d\n", n);
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
if (n != 98)
{
printf("%d, " n);
}
else
{
printf("%d\n", n);
}
n--;
}
}
}
