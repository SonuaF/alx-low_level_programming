#include <stdio.h>
#include "main.h"
/**
 * _strcpy - returns the length of the string
 * @dest: the string length returned
 * @src: string to be returned
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
