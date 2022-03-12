#include <stdio.h>

/**
 * main - print out the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: if successful, return - 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
