#include <stdio.h>
#include "main.h"
/**
 * rev_string -prints a string
 * @s: the string printed
 */
void rev_string(char *s)
{
int j, i;
char c;
j = 0;
while (*(s + j) != '\0')
j++;
j--;
for (i = 0; i < j; i++)
{
c = *(s + j);
*(s + j) = *(s + i);
*(s + i) = c;
j--;
}
}
