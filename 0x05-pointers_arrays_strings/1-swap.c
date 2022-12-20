#include <stdio.h>
#include "main.h"
/**
 * swap_int - prints a string followed by anew line to stdiout
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
