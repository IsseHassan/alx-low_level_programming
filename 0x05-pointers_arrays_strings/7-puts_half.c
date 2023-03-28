#include "main.h"
/**
  * puts_half - function that prints half of a string,
  *Followed by a new line
  *@str: The string to be printed
  *Return: Always 0(success)
  */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2 + 1;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
