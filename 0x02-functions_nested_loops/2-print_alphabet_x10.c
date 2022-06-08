#include <stdio.h>

/**
 * print_alphabet - prints lower case alphabet
 * followed by a new line
 **/
void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
