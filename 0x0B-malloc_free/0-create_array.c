#include <stdlib.h>

#include "main.h"
/**
 * create_array - creates an array of characters
 * @size: size of an array
 * @c: string
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;
if (size == 0)
{
return (NULL);
}
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size)
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
