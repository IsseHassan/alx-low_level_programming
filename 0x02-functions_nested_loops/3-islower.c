#include "main.h"
/**
 * int  _islower(int c) - function that checks for lowercase character
 * it returns 1 if c is lowercase
 * _islower - checks if its a lower character
 * Return: Always 0
 */
int _islower(int c)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
