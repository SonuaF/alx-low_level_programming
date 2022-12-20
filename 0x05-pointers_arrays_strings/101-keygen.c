#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char s = 0;
int i = 0;
char j = 0;
srand(time(0));
while (i <= 2645)
{
s = rand() % 128;
i += s;
putchar(s);
}
j = 2772 - i;
putchar(j);
return (0);
}
