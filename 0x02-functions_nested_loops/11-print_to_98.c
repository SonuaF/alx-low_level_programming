#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers up to 98
 *
 * @n - the first number to print
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf(", ");
}
