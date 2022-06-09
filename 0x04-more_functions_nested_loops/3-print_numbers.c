#include "stdio.h"

/**
 * print_numbers - prints numbers from 0 to 9,
 * followed by a new line
 */

void print_numbers(void)
{
	char n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
}
