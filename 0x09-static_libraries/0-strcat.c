#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{

int i, j, k;

i = 0;

while (dest[i] != '\0')

i++;

k = 0;

j = i;

while (src[k] != '\0')

{



*(dest + j) = *(src + k);

j++;

k++;

}

*(dest + j) = '\0';

return (dest);

}
