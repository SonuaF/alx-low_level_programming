#include "main.h"
/**
 * reverse_array - reverses elements
 * @a: input function
 * @n: input function
 * Return: Always success
 */
void reverse_array(int *a, int n)
{
int j, i, k;
for (i = 0, j = n - 1; i < j; i++, j--)
{
k = a[i];
a[i] = a[j];
a[j] = k;
}
}
