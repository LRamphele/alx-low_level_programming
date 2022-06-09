#include "holberton.h"

/**
 * print_line - drawa a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i = 0;
	while (i < n && n > 0)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
