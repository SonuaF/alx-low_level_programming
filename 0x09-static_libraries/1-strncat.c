#include <stdio.h>
/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: integer
 *
 * Return: length of string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;

i = 0;

while (dest[i] != '\0')

i++;

k = 0;

j = i;

while ((src[k] != '\0') && ((j - i) < n))

{

*(dest + j) = *(src + k);

j++;

k++;

}

*(dest + j) = '\0';

return (dest);
}
