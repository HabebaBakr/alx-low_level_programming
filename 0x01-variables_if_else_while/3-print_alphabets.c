#include <stdio.h>
#include <stdlib.h>

/**
 * main - main raturns alphabets both lower and upper ases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

        putchar('\n');
	return (0);
}
