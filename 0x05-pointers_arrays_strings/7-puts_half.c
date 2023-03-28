#include "main.h"
/**
  * puts_half - function that prints half of a string,
  *Followed by a new line
  *@str: The string to be printed
  */
void puts_half(char *str)
{
	int len;
	int i;

	while (str[len] != '\0')
	len++;
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
