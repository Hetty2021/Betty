#include <stdio.h>

/**
 * main - print out the alphabet in lowercase,
 * followed by a new line
 * Return: if successful return - 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
