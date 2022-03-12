#include <stdio.h>

/**
 * main - print out the alphabet in lowercase,
 * followed by a new line
 * Return: if successful - 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
