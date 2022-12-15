#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints \ n times
 *
 */
void print_diagonal(int n)
{
int diagonal = 0;
int space = 0;
while (diagonal < n && n >= 1)
{
while (diagonal > space)
{
_putchar(' ');
space++;
}
diagonal++;
_putchar('\\');
_putchar('\n');
space = 0;
}
if (n <= 0)
_putchar('\n');
}
