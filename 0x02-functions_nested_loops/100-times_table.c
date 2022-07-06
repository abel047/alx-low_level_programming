#include <stdio>

/**
 * main - nested loop
 * descrition - lop
 * Return: noreturn
 */

void print_times_table(n)
{
int result;
for(int i = 0; i <= n; i++)
{
for(int j = 0; j <= n; j++)
{
if(n > 15 || n < 0)
{
}
else
{
result = i*j;
_putchar("%d",result);
if(j == n)
{
continue;
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
