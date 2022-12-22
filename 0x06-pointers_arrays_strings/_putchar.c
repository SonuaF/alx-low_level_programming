#include <unistd.h>
/**
 * _putchar - returns a char c to to stdout
 * @c: character returned
 *
 * Return: On sucees 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
