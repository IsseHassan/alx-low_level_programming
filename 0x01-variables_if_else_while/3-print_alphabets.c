#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, l;

	c = 'a';
	l = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	while (l <= 'Z')
	{
		putchar(l);
		l += 1;
	}
	putchar('\n');
	return (0);

}
