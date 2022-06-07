#include <stdio.h>

/**
 * print_alphabet - prints lower case alphabet
 * followed by a new line
 **/
void print_alphabet(void)
{
char i;
print_alphabet_x10();
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
/**
 * print_alphabet_x10 - prints alphabet 10 times
 **/
void print_alphabet_x10(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
print_alphabet();
}
}
