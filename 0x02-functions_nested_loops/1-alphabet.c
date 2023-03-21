#include "main.h"
/**
 * main - function that prints the alphabet, in lowercase
 * Followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}

