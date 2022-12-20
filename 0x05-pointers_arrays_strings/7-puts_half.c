#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints a string followed by a new line
 * @str: the string printed
 */
void puts_half(char *str)
{
int length = 0;
int number = 0;
while (str[number++])
{
length++;
}
if (length % 2 == 0)
{
length = length / 2;
}
else
{
length = (length - 1) / 2;
length = (length + 1);
}
number = length;
while (str[length++])
{
_putchar(str[number++]);
}
_putchar('\n');
}
