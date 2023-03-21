#include "main.h"
/**
 * print_alphabet  - function that prints the alphabet, in lowercase
 * Followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

