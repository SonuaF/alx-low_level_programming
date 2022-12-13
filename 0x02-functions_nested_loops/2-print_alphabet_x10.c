#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char c;
int digit;
int i;
for (i = 0 ; i < 10 ; i++)
{
c = 'a';
digit = 0;
while (digit < 26)
{
_putchar(c);
digit++;
c++;
}
_putchar('\n');
}
}
