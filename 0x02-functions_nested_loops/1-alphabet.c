#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
_putchar('\n');
}
