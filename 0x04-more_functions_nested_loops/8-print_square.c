#include <stdio.h>
#include "main.h"
/**
 * print_square - prints last digit
 *
 * Return: last digit
 */
void print_square(int size)
{
int j, i;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar ('#');
_putchar ('\n');
}
}
else
_putchar ('\n');
}
