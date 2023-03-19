#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits.
 * Numbers must be separated by ,
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, p, l;

	for (d = '0'; d < '9'; d++)
		{
			for (p = d + 1; p <= '9'; p++)
			{
				for (l = p + 1; l <= '9'; l++)
				{
					if (p != d && l != p)
						{
							putchar(d);
							putchar(p);
							putchar(l);
							if (d == '8' && p == '9')
								continue;
							putchar(',');
							putchar(' ');
						}
					}
			}
		}
	putchar('\n');
	return (0);
}

