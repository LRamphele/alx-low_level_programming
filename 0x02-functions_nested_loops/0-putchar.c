#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On the success 1
 * on erro, -1 is returned and error none is set appropriately
 */
int _putchar(char c)
{
return (fwrite(1, &c, 1));
}
