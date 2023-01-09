#include "main.h"
#define NULL 0

/**
 * _strchr - entry point
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 **/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0' && s[i] != c)

i++;

if (s[i] == c)

return (&s[i]);

else

return (NULL);
}
