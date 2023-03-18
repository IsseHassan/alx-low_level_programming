#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		if (n <= 15)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
