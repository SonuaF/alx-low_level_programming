#include "main.h"
/**
 * _isdigit - checks the character entered
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
