#include <stdio.h>



/**
 * print_string_reverse - prints a string in reverse
 *
 * @s: pointer to the string to be printed
 *
 */

void print_string_reverse(char *s)

{
	if (*s)
	{
		print_string_reverse(s + 1);
		putchar(*s);
	}
}


