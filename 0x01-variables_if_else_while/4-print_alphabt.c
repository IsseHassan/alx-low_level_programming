#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c += 1;
	}
	putchar('\n');
	return (0);
}

