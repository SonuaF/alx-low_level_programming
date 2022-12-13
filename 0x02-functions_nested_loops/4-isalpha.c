#include "main.h"
/*
 * _isalpha - checks alphabet characters
 * @c: variable
 *
 * Return: 1 if c is a letter
 * Return: 0 if c is not a letter
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
