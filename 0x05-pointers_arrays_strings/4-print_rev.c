#include "main.h"
#include <stdio.h>
/**
 * print_rev - check the code
 * @s: pointer int type
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		putchar(s[count]);
putchar('\n');
}
