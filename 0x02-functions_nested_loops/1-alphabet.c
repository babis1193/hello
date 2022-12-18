nclude <stdio.h>



/**
 * main - Prints "_putchar" followed by a new line using putchar
 *
 * Return: 0
 */

int main(void)

{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}


