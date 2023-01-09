#include "main.h"
/**
 * _memset - function that stores memory
 * @s: input value
 * @b: input value
 * @n: input value
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter;

for (counter = 0; counter < n; counter++)

{

s[counter] = b;

}

return (s);
}
