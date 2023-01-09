#include "main.h"
#include <stdio.h>
/**
 * _puts - prints out a string
 * @str: string printed
 *
 * Return: Always 0(Success)
 */
void _puts(char *str)

{

	int i;

	i = 0;

	while (str[i] != '\0')

	{

		_putchar (str[i]);

		i++;

	}

	_putchar ('\n');

}
