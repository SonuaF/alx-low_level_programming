#include "main.h"
#define NULL 0

/**
 * _strstr - locate and return pointer
 * @haystack: string
 * @needle: target substring
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, x;

if (needle[0] == '\0')

return (haystack);

while (haystack[i] != '\0')

{

if (haystack[i] == needle[0])

{

x = i, j = 0;

while (needle[j] != '\0')

{

if (haystack[x] == needle[j])

x++, j++;

else

break;

}

if (needle[j] == '\0')

{

return (haystack + i);

}

}

i++;

}

return (NULL);
}
