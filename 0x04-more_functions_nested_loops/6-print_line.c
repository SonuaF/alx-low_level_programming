#include <stdio.h>
#include "main.h"
/**
 * print_line - prints the last digit
 * @n: is the number to be checked
 *
 * Return: the last digit
 */
void print_line(int n)
{
int i;
i = 0;
while (i < n)
{
_putchar ('_');
i++;
}
_putchar ('\n');
}
