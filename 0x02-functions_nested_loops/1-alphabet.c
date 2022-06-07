#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase
 * followed by a new line
 */
int main(void)
{
char ch;
print_alphabet();
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
