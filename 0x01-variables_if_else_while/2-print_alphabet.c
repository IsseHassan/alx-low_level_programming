#include <stdio.h>
#include <stdlib.h>
/**
 *Main - print alphabet in lower case
 *Description: followed by new line
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
		c = c + 1;
	}
	return (0);


}

