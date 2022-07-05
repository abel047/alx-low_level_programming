#include <stdio.h>
/**
 * main - void return
 * description - alphabet to lowecase
 * return - int
 */

int main(void)
{

print_alphabet();

}

void print_alphabet()
{
 char c ='a';

 while(c <'z')
 {
	putchar(c);
	c++;
	putchar('\n');
 
 }

}
