#include <stdio.h>

/**
 * main - print out the lowercase alphabet in reverse,
 * followed by a new line
 * Return: if successful return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
