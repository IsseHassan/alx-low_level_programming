#include <string.h>
#include "main.h"
/**
  *print_rev - function that prints a string, in reverse
  *followed by a new line.
  *@s:parameter
  */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(strrev(*s));
		s++
	}
	_putchar('\n');
}

