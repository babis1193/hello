#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase followed by a new line
 *
 * * Return: 0
 *
 */

int main(void)

{
	ichar c;
	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}
