#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);


}

