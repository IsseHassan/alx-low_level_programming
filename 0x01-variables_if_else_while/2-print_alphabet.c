#include <stdio.h>
#include <stdlib.h>
/**
 *Main - Entery point
 *Description: prints the alphabet in lowercase, followed by a new line.
 *Return: Always 0.
 */
int main(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c += 1;
	}
	return (0);


}

