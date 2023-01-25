#include "function_pointers.h"

/**
 * int_index - Search for an integer by another function
 * @array: The array
 * @size: Size of array
 * @cmp: The function pointer to the integer
 *
 * Return: Index of first element when secc or -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
