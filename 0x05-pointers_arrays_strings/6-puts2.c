#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints a string
 *
 * @str: string to put twice
 */
void puts2(char *str)
{
int i, j;
j = 0;
while (str[j] != '\0')
j++;
for (i = 0; i <= j - 1; i = i + 2)
_putchar (*(str + i));
_putchar ('\n');
}
