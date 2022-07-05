#include <stdio.h>

/**
 * main - void return
 * description - alphabet to lowecase
 * Return - int
 */
int main()
{

print_alphabet();
	
return (0);
}

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
