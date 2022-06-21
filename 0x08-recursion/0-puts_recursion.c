#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void_puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
putchar(*s);
void_puts_recursion(s + 1);
}
