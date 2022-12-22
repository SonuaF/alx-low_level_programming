#include "main.h"
#include <stdio.h>
/**
 * leet - main function
 * @c: input string
 * Return: string
 */
char *leet(char *c)
{
int i, j;
char a[] = "oOlLeEaAtT";
char n[] = "0011334477";
for (i = 0; c[i] != '\0'; i++)
for (j = 0; a[j] != '\0'; j++)
if (c[i] == a[j])
c[i] = n[j];
return (c);
}
