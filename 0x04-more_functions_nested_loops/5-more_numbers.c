#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Followed by a new line
 * No Return
 */
void more_numbers(void)
{
	int n, rep;

	rep = 0;
	while (rep < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar(n / 10  + '0');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		rep++;
	}
}
