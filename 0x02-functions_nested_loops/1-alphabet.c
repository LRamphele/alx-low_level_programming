#include <stdio.h>

/**
 * main - print_alphabet - prints lower case alphabet, 
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
  char c = 'a';
  while (c <= 'z')
  {
    putchar(c);
    c++;
  }
  putchar('\n');
}
