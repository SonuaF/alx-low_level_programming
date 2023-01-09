#include "main.h"
/**
 * _memcpy - function that copies memory
 * @dest: memory stored
 * @src: copied memory
 * @n: number of bytes
 *
 * Return: n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n;

if (size > 0)

{

int i;

for (i = 0; i < size; i++)

dest[i] = src[i];

}

return (dest);

}
