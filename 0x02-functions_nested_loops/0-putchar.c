#include "main.h"

/**
 * Main - print out main car by char.
 * Description: uses the main header file
 * that containsthe function _putchar
 * Return: 0.
 */
int main(void)
{
char str[] = "putchar";
int i;

i = 0;
while (str[i])
{
_putchar(str[i]);
++i;
}
_putchar(str[i]);

return (0);
}
