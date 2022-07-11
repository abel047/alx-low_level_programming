/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
       char *c;

       c = str;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
