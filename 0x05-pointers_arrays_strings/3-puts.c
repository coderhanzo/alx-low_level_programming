#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code.
 * @str: pointer int type
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
