#include <stdio.h>
/**
 * _strncpy - returns the length of string
 * @dest: returned string
 * @src: string
 * @n : int
 * Return: length of string
 */
char *_strncpy(char *dest, char *src, int n)
{
int k = 0;
while ((src[k] != '\0') && (k < n))
{
*(dest + k) = *(src + k);
k++;
}
while (k < n)
{
*(dest + k) = '\0';
k++;
}
return (dest);
}
