#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		int d = n / 10;
		int r = n % 10;

		if (d > 0)
		{
			_putchar(d + '0');
		}
		_putchar(r + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
