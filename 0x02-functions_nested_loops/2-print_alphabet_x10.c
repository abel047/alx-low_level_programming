#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
  
char c;
   
   for(int i = 0; i <= 10;i++)
   {
    for(c = 'a'; c <= 'z';c++)
    {
        __putchar(c);
    }
    __putchar('\n');
   }

}
