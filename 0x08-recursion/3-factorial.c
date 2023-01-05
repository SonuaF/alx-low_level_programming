#include "main.h"
/**
 * factorial - Returns the factorial of n
 * @n: The integer
 *
 * Return: The factorial of the integer
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
